#include <stdio.h>  
int gcd(int x,int y)    //��x��y�����������շת����� 
{  
    if(y==0)  
        return x;  
    else  
        gcd(y,x%y);  
}  
int main()  
{  
    int s,m;  
    while(scanf("%d %d",&s,&m)!=EOF)  
    {  
        if(gcd(s,m)==1)     //�������Ϊ1���ʣ���Good Choice 
            printf("%10d%10d    Good Choice\n\n",s,m);  
        else     //������Bad Choice 
            printf("%10d%10d    Bad Choice\n\n",s,m);
    }
    return 0;  
}


/*շת������������return ��С�Ǹ��� 
#include<stdio.h>
int judge(int x,int y);
int main()
{
	int x,y,flag;
	while((scanf("%d%d",&x,&y))!=EOF)
	{
		flag=judge(x,y);

		if(flag==1)
		{
			printf("%10d%10d    Good Choice\n\n",x,y);  
		}
		else printf("%10d%10d    Bad Choice\n\n",x,y);  
	}
}
int judge(int x,int y)
{
	int i,temp;
	if(x<y)
	{
		temp=y;
		y=x;
		x=temp;
	}
	while(y!=0)
	{
		temp=x%y;
		x=y;
		y=temp;
	}
	return x;
	
}


*/
