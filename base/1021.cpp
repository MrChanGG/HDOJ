#include<stdio.h>
int main()
{    int x;
     while(scanf("%d",&x)!=EOF)
    {
	  if((x-2)%4==0)
	    printf("yes\n");
	  else printf("no\n");
    }
}

