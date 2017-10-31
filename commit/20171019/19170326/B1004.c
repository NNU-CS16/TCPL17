#include<stdio.h>
struct student
{
	char name[10];
	char number[20];
	int score;
};
int main()
{
	int n;
	scanf("%d\n",&n);
	struct student stu[20];
	int min=0,max=0;
	int i;
	for(i=0;i<=n-1;i++)
	{
		if(i!=n-1)
		scanf("%s %s %d\n",stu[i].name,stu[i].number,&stu[i].score);
		else
		scanf("%s %s %d",stu[i].name,stu[i].number,&stu[i].score);
	}
	for(i=1;i<=n-1;i++)
	{
		if(stu[min].score>stu[i].score)
			min=i;
		if(stu[max].score<stu[i].score)
			max=i;
	}
	printf("%s %s\n",stu[max].name,stu[max].number);
	printf("%s %s\n",stu[min].name,stu[min].number);
	return 0;
}
