#include<stdio.h>
const int N = 120;
const int MAX = 120;
int c1[120], c2[120];
int n;
void init(){
    c1[0] = 1;
    for(int i = 1; i <= MAX; i ++){
        for(int j = 0; j < N; j += i){
            for(int k = 0; j + k < N; k ++){
                c2[j + k] += c1[k];
            }
        } 
        for(int j = 0; j < N; j ++){
            c1[j] = c2[j];
            c2[j] = 0;
        }
    }
} 
int main(){
    init();
    while(scanf("%d", &n) != EOF){
        printf("%I64d\n", c1[n]);
    }
}
