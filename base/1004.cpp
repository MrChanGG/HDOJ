#include<stdio.h> // 题目涉及到输入输出 
#include<string.h> // 题目涉及到字符串处理 
#define N 1001 //题目中说了哈，最多1000个气球，这里给到1001个，贼安全 
#define COLOR_NAME_LENGTH 20 // 颜色的英文不会超过20个字母吧，我猜的… 
int main(){
	//初始化变量和数组 
	char color[N][COLOR_NAME_LENGTH];
	int n,i,j,count[N],max,k;
	//确定条件，根据题意，循环碰到0break，不然就继续自动要求输入 
	while((scanf("%d",&n))&&n!=0){
		//输入n之后，给出n个气球分别的颜色 
		for(i=0;i<n;i++){
			scanf("%s",&color[i]);
		}
		//每个气球的数量先统一给到0个 
		for(i=0;i<n;i++){
			count[i]=0;
		}
		//通过最简单的两两比较，为color数组的count计数 
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(strcmp(color[i],color[j])==0){
					count[i]+=1;
				}
			}
		}
		//经典找最大值的方法 
		max = 0;
		k = 0;
		for(i=0;i<n;i++){
			if(count[i]>max){
				max = count[i];
				k=i;
			}	
		}
		printf("%s\n",color[k]); 
	}
	return 0;
} 



/*#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n != 0){        //碰到0就结束输入 
        char color[1000][15];
        int count[1000] = {0};
        int currentColor = 0;//有多少种颜色
        int i = 0;
        //开始输入
        for(i; i < n; ++i){
            char s[15];
            int haveSameColor = 0;
            int j = 0;

            scanf("%s",&s);
            for(j ; j < currentColor; ++j){
                if(!strcmp(s,color[j])){
                    count[j] ++;
                    haveSameColor = 1;
                    break;
                }
            }
            if(!haveSameColor)
            {
                strcpy(color[currentColor++],s);
            }
        }
        int maxIndex = 0;
        int max = count[0];
        for(i = 1;i < currentColor;++ i){
            if(count[i] > max){
                max = count[i];
                maxIndex = i;
            }
        }
        printf("max：%s\n",color[maxIndex]);
        scanf("%d",&n);
    }
    return 0;
}*/
