#include<stdio.h>
#include<string.h>
int main(void){
    char s[10000];
    int a=0,i,j=0;
    while(scanf("%s",s)!=EOF && strcmp(s,"0") != 0){
        j = strlen(s);
        for(i=0;i<j;i++){
            a += s[i] -'0';
            while(a>9){
                a = a/10 + a%10;
            }
        }
        printf("%d\n",a);
        a = 0;
    }
    return 0;
}

