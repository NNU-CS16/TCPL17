#include<stdio.h>
struct std
{
char name[10];
char num[10];
int score;
};

int main()
{
int n,i;
//int max,min,t1,t2;
scanf("%d",&n);
int max=n-1,min=0;
struct std stu[n];
for(i=0;i<n;i++)
scanf("%s%s%d",stu[i].name,stu[i].num,&stu[i].score);
for(i=1;i<n;i++)
{
if(stu[i].score<stu[min].score)
min=i;
}
for(i=0;i<n-1;i++)
{
if(stu[i].score>stu[max].score)
max=i;
}
printf("%s %s\n",stu[max].name,stu[max].num);
printf("%s %s\n",stu[min].name,stu[min].num);
return 0;
}
