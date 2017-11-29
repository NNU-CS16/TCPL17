#include<stdio.h>

struct student
{
	char name[20];
	char number[20];
	int score;
};

int main()
{
	struct student stu[100];
	int i,m,n;
	int temp;
	scanf("%d\n",&n);
	for(i=0; i<n; i++)
	{
		scanf("%s",stu[i].name);
		scanf("%s",stu[i].number);
		scanf("%d",&stu[i].score);
																                if(i<n-1)
			scanf("\n");
	}
	for(i=0; i<n-1; i++)
	{
		if(stu[i].score>stu[i+1].score)
		{
			n=i;
			m=i+1;
		}
		else
		{
			n=i+1;
			m=i;
		}
	}	 	
	printf("%s %s\n",stu[n].name,stu[n].number);
	printf("%s %s\n",stu[m].name,stu[m].number);
       	return 0;
}

