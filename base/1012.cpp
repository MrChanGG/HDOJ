#include<stdio.h>
double order(double x);
int main()
{
	double i,x,sum;
	printf("n e\n");
    printf("- -----------\n");
	for(x=0;x<=9;x++){
    sum=0;
	for(i=0;i<=x;i++)
	{
		sum+=1/order(i);
	}
       printf("%.0lf ",x);
        if(x<=1)
        printf("%d\n",(int)sum);
        else if(x==2)
        printf("%.1lf\n",sum);
        else
        printf("%.9lf\n",sum);
}}
double order(double x)
{
	double sum=1,i=1;
	if(x==0) return 1;
	else {
		while(i<=x)
{
	sum*=i;
	i++;
	
}
return sum;
	}
}
