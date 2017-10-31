#include<stdio.h>
int main()
{
struct stu
{
	char name[10];
        char num[10];
	int score;
}a[25];
	
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
        scanf("%s%s%d",a[i].name,a[i].num,&a[i].score);
	struct max;
	max.score=a[0].score;
	for(i=0;i<n;i++)
	{
		if(max.score<a[i].score)
		{
	         max.score=a[i].score;	
		        max=a[i];
		}
		else
			max=max;
	}
	printf("%s %s",max.name,max.num);
	struct min;	
	min.score=a[0].score;
	for(i=0;i<n;i++)
	{
		if(min.score>a[i].score)
		{
		min.score=a[i].score;
		        min=a[i];
		}
		else
			min=min;
	}
	printf("%s %s",min.name,min.num);
	printf("\n");
	return 0;
}




