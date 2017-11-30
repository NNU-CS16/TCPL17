#include<stdio.h>
#include<string.h>
struct Student
{
    char name[10];
    char id[10];
    float score;
};
int main()
{
    struct Student stu[100];
    int i=0,n,max,j,k,temp;
    char t[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s%f",stu[i].name,stu[i].id,&stu[i].score);
    }
    i--;
    for(j=0;j<i;j++)
    {
        for(k=0;k<i-j;k++)
        {
            if(stu[k].score>stu[k+1].score)
            {
                temp=stu[k].score;
                stu[k].score=stu[k+1].score;
                stu[k+1].score=temp;
                strcpy(t,stu[k].name);
                strcpy(stu[k].name,stu[k+1].name);
                strcpy(stu[k+1].name,t);
                strcpy(t,stu[k].id);
                strcpy(stu[k].id,stu[k+1].id);
                strcpy(stu[k+1].id,t);
            }
        }
    }
    printf("%s %s %f\n",stu[i].name,stu[i].id,stu[i].score);
    printf("%s %s %f\n",stu[0].name,stu[0].id,stu[0].score);
    return 0;
}
