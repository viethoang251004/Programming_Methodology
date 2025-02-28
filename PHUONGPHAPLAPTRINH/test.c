#include<stdio.h>
#include<string.h>
#include<math.h>
#define PI 3.1415926535
void Wind(int b[],int dc, int dg,int ld,float nd[],float n);
void Rain(int b[],int dc, int dg,int ld,float nd[],float n);
void Sun(int b[],int dc, int dg,int ld,float nd[],float n);
void Cloud(int b[], int dc, int dg, int ld,float nd[], int n);
int isFriendPair(int, int);
int isFibonacci(int);
void Wind(int b[],int dc, int dg,int ld,float nd[], float n){
	float nbc=1.0*dc*dc*sqrt(dc);
	float nbg=1.0*dg*dg*PI/3;
	int i, j, ladongbc = 1, ladongbg = 1;
	if(dc>=8) ladongbc=2; 
	if(dg>=5) ladongbg=2;
	if(nbg<=0){
		while(ld>ladongbc && nd[0] >= nbc){
			nd[0]=nd[0]-nbc;
			ld-=ladongbc;
			b[0]++;
		}
	}
	if(nbc<=0){
		while(ld>ladongbg && nd[0] >= nbg){
			nd[0]=nd[0]-nbg;
			ld-=ladongbg;
			b[1]++;
		}
	}
	if(nbc>0 && nbg>0){
		int bcMax = n*1.0/nbc;
		int bgMax = n*1.0/nbg;
		float min = n;
		for (i=0; i<=bcMax; i++){
			for(j=0; j<=bgMax; j++){
				if (n -(nbc*i+nbg*j) < min && n -(nbc*i+nbg*j) >= 0 && ladongbc*i+ladongbg *j <=ld){
					min = n -(nbc*i+nbg*j);
					b[0]=i;
					b[1]=j;
					nd[0]=min;
				}	
			}
		}
	}
}
void Rain(int b[],int dc, int dg,int ld,float nd[],float n){
	float nbc=1.0*dc*dc*sqrt(dc);
	float nbg=1.0*dg*dg*PI/3;
	int i, j,bi,bj, ladongbc = 1, ladongbg = 1;
	if(dc>=8) ladongbc=2; 
	if(dg>=5) ladongbg=2;
	if(nbg<=0){
		while(ld>ladongbc && nd[0] >= nbc){
			nd[0]=nd[0]-nbc;
			ld-=ladongbc;
			b[0]++;
		}
	}
	if(nbc<=0){
		while(ld>ladongbg && nd[0] >= nbg){
			nd[0]=nd[0]-nbg;
			ld-=ladongbg;
			b[1]++;
		}
	}
	if(nbc>0 && nbg>0){
		while (nd[0]>=nbc+nbg && ld>=ladongbc+ladongbg){
			nd[0]-=nbc+nbg;
			b[0]++;
			b[1]++;
			ladongbc-=ladongbc+ladongbg;
		}
		if (nd[0]>nbc || nd[0]>nbg){
			int bcMax = nd[0]/nbc;
			int bgMax = nd[0]/nbg;
			float min = nd[0];
			for (i=0; i<=bcMax; i++){
				for(j=0; j<=bgMax; j++){
					if (nd[0] -(nbc*i+nbg*j) < min && nd[0] -(nbc*i+nbg*j) >= 0 && ladongbc*i+ladongbg *j <=ld){
						min = nd[0] -(nbc*i+nbg*j);
						bi=i;
						bj=j;
						
					}	
				}
			}
			nd[0]=min;
			b[0]+=bi;
			b[1]+=bj;
		}
	}
}
void Fog(int b[],int dc, int dg,int ld,float nd[],float n){
	if(isFibonacci(dc)==1 && isFibonacci(dg)==1) {
		 dc=dc/2;
		 dg=dg/2;
	}else{
		dc=dc*2;
		dg=dg*2;
	}
	float nbc=1.0*dc*dc*sqrt(dc);
	float nbg=1.0*dg*dg*PI/3;
	int i, j,bi,bj, ladongbc = 1, ladongbg = 1;
	if(dc>=8) ladongbc=2; 
	if(dg>=5) ladongbg=2;
	if(nbg<=0){
		while(ld>ladongbc && nd[0] >= nbc){
			nd[0]=nd[0]-nbc;
			ld-=ladongbc;
			b[0]++;
		}
	}
	if(nbc<=0){
		while(ld>ladongbg && nd[0] >= nbg){
			nd[0]=nd[0]-nbg;
			ld-=ladongbg;
			b[1]++;
		}
	}
	if(nbc>0 && nbg>0){
		if(nbc>nbg){
			while(ld>ladongbc && nd[0] >= nbc){
			nd[0]=nd[0]-nbc;
			ld-=ladongbc;
			b[0]++;
			}
			while(ld>ladongbg && nd[0] >= nbg){
			nd[0]=nd[0]-nbg;
			ld-=ladongbg;
			b[1]++;
			}
		}else{
			while(ld>ladongbg && nd[0] >= nbg){
			nd[0]=nd[0]-nbg;
			ld-=ladongbg;
			b[1]++;
			}
			while(ld>ladongbc && nd[0] >= nbc){
			nd[0]=nd[0]-nbc;
			ld-=ladongbc;
			b[0]++;
			}
		}
	}

}
void Sun(int b[],int dc, int dg,int ld,float nd[],float n){
	int arr[5][6]={5,7,10,12,15,20,20,5,7,10,12,15,15,20,5,7,10,12,12,15,20,5,7,10,10,12,15,20,5,7};
	int h=ld%5, g=dc%6;
	n = n+(n*(arr[h][g]*1.0/100));
	ld = ld-arr[h][g];
	nd[0]=n;
	if ((dc+dg) % 3 == 0)
		Rain(b,dc,dg,ld,nd,n);
	if ((dc+dg) % 3 == 1)
		Wind(b,dc,dg,ld,nd,n);
	if ((dc+dg) % 3 == 2)
		Cloud(b,dc,dg,ld,nd,n);
}
void Cloud(int b[], int dc, int dg, int ld,float nd[], int n){
	if (isFriendPair(n,ld) == 0) {
		float nbc=1.0*dc*dc*sqrt(dc);
		float nbg=1.0*dg*dg*PI/3;
		int i, j, ladongbc = 1, ladongbg = 1;
		if(dc>=8) ladongbc=2; 
		if(dg>=5) ladongbg=2;
		if(nbg<=0){
			while(ld>ladongbc && nd[0] >= nbc){
				nd[0]=nd[0]-nbc;
				ld-=ladongbc;
				b[0]++;
			}
		}
		if(nbc<=0){
			while(ld>ladongbg && nd[0] >= nbg){
				nd[0]=nd[0]-nbg;
				ld-=ladongbg;
				b[1]++;
			}
		}
		if(nbc>0 && nbg>0){
			int bcMax = n*1.0/nbc;
			int bgMax = n*1.0/nbg;
			float min = n;
			for (i=0; i<=bgMax; i++){
				for(j=0; j<=bcMax; j++){
					if (n -(nbc*j+nbg*i) < min && n -(nbc*j+nbg*i) >= 0 && ladongbc*j+ladongbg *i <=ld){
						min = n -(nbc*j+nbg*i);
						b[0]=j;
						b[1]=i;
						nd[0]=min;
					}	
				}
			}
		}	
	}
}
int main(){
	int n, dc, dg, ld, b[2]={0,0};
	char w[100];
	FILE *in, *out;
	in = fopen("input.inp","r");
	fscanf(in,"%d%d%d%d%s",&n,&dc,&dg,&ld,w);
	fclose(in);
	float nd[1];
	nd[0]=n;
	out = fopen("output.out","w");
	if (n>=2000 || 1>ld || ld>600 || (dc<=0 && dg<=0)){
		fprintf(out,"-1 -1 %d",n);
		return 0;
	}
	if (strcmp(w,"Wind")==0){
		Wind(b,dc,dg,ld,nd,n);
		fprintf(out,"%d %d %.3f",b[0],b[1],nd[0]);
	}
	if (strcmp(w,"Rain")==0){
		Rain(b,dc,dg,ld,nd,n);
		fprintf(out,"%d %d %.3f",b[0],b[1],nd[0]);
	}
	if (strcmp(w,"Cloud")==0){
		Cloud(b,dc,dg,ld,nd,n);
		fprintf(out,"%d %d %.3f",b[0],b[1],nd[0]);
	}
	if (strcmp(w,"Fog")==0){
		Fog(b,dc,dg,ld,nd,n);
		fprintf(out,"%d %d %.3f",b[0],b[1],nd[0]);
	}
	if (strcmp(w,"Sun")==0){
		Sun(b,dc,dg,ld,nd,n);
		fprintf(out,"%d %d %.3f",b[0],b[1],nd[0]);
	}
	fclose(out);
	return 0;
}
int isFriendPair(int a, int b){
  	int sum1 = 0, sum2 = 0;
  
	for(int i=1; i<=a; i++) {
		if(a%i == 0) 
		sum1 += i;
	}

	for(int i=1; i<=b; i++) {  
		if(b%i == 0)
		sum2 += i; 
	}

	if(sum1 == b && sum2 == a)
		return 1;

	return 0;
}
int isFibonacci(int n) {
    if (n < 0) {
        return 0; 
    }
    if (n == 0 || n == 1) {
        return 1; 
    }
    int term1 = 5 * n * n + 4;
    int term2 = 5 * n * n - 4;
    if (sqrt(term1) * sqrt(term1) == term1 || sqrt(term2) * sqrt(term2) == term2) {
        return 1;
    }

    return 0; 
}