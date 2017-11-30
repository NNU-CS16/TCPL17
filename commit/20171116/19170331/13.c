#include<stdio.h>

struct student
{
    char num[11];
    char name[11];
    int s;
};
int main()
{
    struct student stu[100],min,max;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s %s %d",stu[i].name,stu[i].num,&stu[i].s);
    min=stu[0];
    max=stu[0];
    for(int i=0;i<n;i++)
    {
        if(stu[i].s>max.s)
            max=stu[i];
        if(stu[i].s<min.s)
            min=stu[i];
    }
    printf("%s %s\n",max.name,max.num);
    printf("%s %s\n",min.name,min.num);
    return 0;
}

