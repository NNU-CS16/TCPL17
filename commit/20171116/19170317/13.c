#include <stdio.h>

struct Student
{
	char name[10];
	char id[10];
	float score;
};

int main()
{
	struct Student stu[100];
	struct Student temp;
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
	  scanf("%s", &stu[i].name);
	  scanf("%s", &stu[i].id);
	  scanf("%f", &stu[i].score);
	}
	for (i = 0; i < n; ++i)
	  for (j = 0; j < n - i; ++j)
		if (stu[j].score > stu[j+1].score)
		  temp = stu[j];
		  stu[j] = stu[j+1];
		  stu[j+1] = temp;
	printf("%s, %s\n", stu[n-1].name, stu[n-1].id);
	printf("%s, %s\n", stu[0].name, stu[0].id);
	return 0;
}
