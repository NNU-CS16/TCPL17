#include<stdio.h>
#include<string.h>
int main()
{
    int N;
    char name[101][20];//储存姓名
    char num[101][20];//储存学号
    int pro[101];//储存成绩
    int i,max=0,min=101;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%s %s %d",&name[i],&num[i],&pro[i]);
        if(pro[i]>max)
            max=pro[i];
        if(pro[i]<min)
            min=pro[i];
    }
    for(i=0;i<N;i++)
        if(max==pro[i])
            printf("%s %s\n",name[i],num[i]);
    for(i=0;i<N;i++)
        if(min==pro[i])
            printf("%s %s\n",name[i],num[i]);
    return 0;
}
