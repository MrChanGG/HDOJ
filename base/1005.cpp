#include "stdio.h"
int main(){
	int a, b, n;
	while (scanf("%d %d %d", &a, &b, &n)&&(a||b||n)){ //or的意思任何一个是1都是1

		int f[50];
		f[1]=f[2]=1;
		for (int i = 3; i < 50; i++){
			f[i] = (a*f[i - 1] + b*f[i - 2]) % 7;
		}
		printf("%d\n", f[(n) % 49]);
	}
	return 0;
}


/*
#include<stdio.h>
int main()
{
   int a,b,n,f[50];
   
    while(scanf("%d%d%d",&a,&b,&n))
    {
    	if(a==0&&b==0&&n==0)break;
    	f[1]=f[2]=1;
    	int N=3;
    	for(N=3;N!=50;N++)
    	{
    	f[N]=(a*f[N-1]+b*f[N-2])%7;
		if(f[N]==1&&f[N-1]==1) break;	
		}
		n=n%(N-2);
		if(n==0) printf("%d\n",f[N-2]);
		else printf("%d\n",f[n]);
    	
	}
	return 0;
    
	
}
*/
