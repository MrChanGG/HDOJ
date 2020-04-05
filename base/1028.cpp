#include<stdio.h>
const int N = 120;//题目问到120为止 
const int MAX = 120;//题目能拆分的数，比如若有120种不同的门票 
int c1[120], c2[120];///c2是临时合并的多项式，c1是最终合并的多项式 
int n;
void init(){
    c1[0] = 1;//一开始0的情况算一种 
    for(int i = 1; i <= MAX; i ++){//把1分到MAXN的邮票合并，变成一个多项式 
        for(int j = 0; j < N; j += i){//i分的邮票，步长是i
            for(int k = 0; j + k < N; k ++){//从x^0到x^N遍历一遍 
                c2[j + k] += c1[k];//因为j的所有项系数为1，所以c1[k]可以看成c1[k]*1; 
            }
        } 
        for(int j = 0; j < N; j ++){//把c2的数据抄到c1，清空c2 
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
