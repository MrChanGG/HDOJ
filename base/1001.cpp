#include<stdio.h>
int main()
{
	int x,i;
	while(scanf("%d",&x)!=EOF)
	{ int sum=0;
		for(i=0;i<=x;i++)
		sum+=i;
		
		printf("%d\n",sum);
	}
	
}
