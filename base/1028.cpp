#include<stdio.h>
const int N = 120;//��Ŀ�ʵ�120Ϊֹ 
const int MAX = 120;//��Ŀ�ܲ�ֵ�������������120�ֲ�ͬ����Ʊ 
int c1[120], c2[120];///c2����ʱ�ϲ��Ķ���ʽ��c1�����պϲ��Ķ���ʽ 
int n;
void init(){
    c1[0] = 1;//һ��ʼ0�������һ�� 
    for(int i = 1; i <= MAX; i ++){//��1�ֵ�MAXN����Ʊ�ϲ������һ������ʽ 
        for(int j = 0; j < N; j += i){//i�ֵ���Ʊ��������i
            for(int k = 0; j + k < N; k ++){//��x^0��x^N����һ�� 
                c2[j + k] += c1[k];//��Ϊj��������ϵ��Ϊ1������c1[k]���Կ���c1[k]*1; 
            }
        } 
        for(int j = 0; j < N; j ++){//��c2�����ݳ���c1�����c2 
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
