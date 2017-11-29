#include <stdio.h>


struct student
{
	char num[100];
	char name[100];
	int score;
};

int main()
{
	struct student stu[100],min,max;
	int i,j;
	scanf("%d",&j);
	i=0;
	while(i < j)
	i++;
	scanf("%s%s%d",stu[i].name,stu[i].num,&stu[i].score);
	min = stu[0];
	max = stu[0];
	for(i = 0;i < j; i++)
	{
		if(stu[i].score > max.score)
			max = stu[i];
		if(stu[i].score < min.score)
			min = stu[i];
	}
	printf("%s %s\n",max.name,max.num);
	 printf("%s %s\n",min.name,min.num);
	 return 0;
}


