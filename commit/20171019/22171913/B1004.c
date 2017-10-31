#include<stdio.h>
int main()
{
    int n,score[100],i=0,max=0,min=0;    //定义分数数组
    char name [100][12],sno[100][12];    //定义名字和学号的二维数组
    scanf("%d",&n);
    while(i<n)
    {
	 scanf("%s",name[i]);      
	 scanf("%s",sno[i]);
	 scanf("%d",&score[i]);
	 i++;
    }
    for(i=1;i<n;i++)
    {
	 if(score[max]<score[i]) max=i;
	 if(score[max]>score[i]) min=i;
    }
    printf("%s %s\n",name[max],sno[max]);
    printf("%s %s\n",name[min],sno[min]);
    return 0;
}
