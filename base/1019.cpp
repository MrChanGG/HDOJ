#include<stdio.h>
__int64 gcd(__int64 x ,__int64  y);
int main()
{
	__int64 a[1000],min,t,max;
	int n,m,i;
	scanf("%d",&n);
    while(n--)
    {
    	scanf("%d",&m);
    	for(i=0;i<m;i++)
    	{
    		scanf("%I64d",&a[i]);
		}
		min=a[0];
	    for(i=1;i<m;i++)
	    {
	    	if(min>a[i])
	    	{
	    	    t=min;
                min=a[i];
                a[i]=t;  
			}
			max=gcd(a[i],min);
			min=min*a[i]/max;
		}
		printf("%I64d\n",min);

	}
   

		
}
__int64  gcd(__int64  x,__int64  y)//x±Èy´ó 
{
	if(x%y==0)
	return y;
	else 
	return gcd(y,x%y);
}
