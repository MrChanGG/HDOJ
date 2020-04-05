#include <iostream>
#include<algorithm>
#include<cstring>//memset 
#define N 1000000
using namespace std;



int main()
{
    int n,mark[N];
    while(scanf("%d",&n)!=EOF)
    {
        for (int i = 0;i<n;i++)
          scanf("%d",&mark[i]);
        sort(mark,mark+n);
        printf("%d\n",mark[(n+1)/2]);
        memset(mark,0,sizeof(mark));
    }
    return 0;
}

