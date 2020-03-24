#include<stdio.h>
int main()
{
	int i,a[101],x,sum;
	while((scanf("%d",&x))&&x!=0){
	sum=0;
	sum+=5*x;
	for(i=1;i<=x;i++)
	{
		scanf("%d",&a[i]);
		
	}
	sum+=a[1]*6;
	for(i=2;i<=x;i++)
	{
		if((a[i]-a[i-1])<0)
			sum+=(a[i-1]-a[i])*4;
		else sum+=(a[i]-a[i-1])*6;
		
	}
	printf("%d\n",sum);}
}
