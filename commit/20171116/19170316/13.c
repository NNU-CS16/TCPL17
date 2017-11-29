#include<stdio.h>

struct stu//结构体
{
    char name[10],num[10];
    int score;
}
stu[100]; 

int main()
{
int n,i,j;
struct stu t;
scanf("%d",&n);
for(i=0;i<n;i++)//录入数据
	scanf("%s%s%f",stu[i].name,stu[i].num,&stu[i].score);
for(i=n-1;i>=0;i--)//输出数据
	for(j=0;j<i;j++)
		if(stu[j].score<stu[j+1].score)
		{
			t=stu[j];
			stu[j]=stu[j+1];
			stu[j+1]=t;
		}
printf("%s %s\n",stu[0].name,stu[0].num);
printf("%s %s\n",stu[n-1].name,stu[n-1].num);
return 0;
}

