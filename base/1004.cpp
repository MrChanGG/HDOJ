#include<stdio.h> // ��Ŀ�漰��������� 
#include<string.h> // ��Ŀ�漰���ַ������� 
#define N 1001 //��Ŀ��˵�˹������1000�������������1001��������ȫ 
#define COLOR_NAME_LENGTH 20 // ��ɫ��Ӣ�Ĳ��ᳬ��20����ĸ�ɣ��Ҳµġ� 
int main(){
	//��ʼ������������ 
	char color[N][COLOR_NAME_LENGTH];
	int n,i,j,count[N],max,k;
	//ȷ���������������⣬ѭ������0break����Ȼ�ͼ����Զ�Ҫ������ 
	while((scanf("%d",&n))&&n!=0){
		//����n֮�󣬸���n������ֱ����ɫ 
		for(i=0;i<n;i++){
			scanf("%s",&color[i]);
		}
		//ÿ�������������ͳһ����0�� 
		for(i=0;i<n;i++){
			count[i]=0;
		}
		//ͨ����򵥵������Ƚϣ�Ϊcolor�����count���� 
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(strcmp(color[i],color[j])==0){
					count[i]+=1;
				}
			}
		}
		//���������ֵ�ķ��� 
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
    while(n != 0){        //����0�ͽ������� 
        char color[1000][15];
        int count[1000] = {0};
        int currentColor = 0;//�ж�������ɫ
        int i = 0;
        //��ʼ����
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
        printf("max��%s\n",color[maxIndex]);
        scanf("%d",&n);
    }
    return 0;
}*/
