#include<stdio.h>
int main(){
	int n,m,cont=0,num=0;
	int T;
	scanf("%d",&T);
	while(T--)
	{
	while((scanf("%d%d",&n,&m)&&(n!=0||m!=0)))   //֮ǰ��������ˣ������m��=0��~~��ʵ�Եڶ�������ûɶҪ��
	{		
		int a,b;
	    for(a=1;a<100;++a){
		for(b=a+1;b<n;++b){
			if((a*a+b*b+m)%(a*b)==0)
			cont++;
		}
	}
	//cout<<"Case "<<++num<<": "<<cont<<endl;
	
	printf("Case %d: %d\n",++num,cont);
	cont=0;
	}
	num=0;
	if(T)
	printf("\n");
	}
}
