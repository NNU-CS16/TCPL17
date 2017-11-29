#include <stdio.h>
struct student
{
	char name[10];
	char id[10];
	int score;
};
int main()
{
	struct student stu[1000];
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s%s%d", stu[i].name, stu[i].id, &stu[i].score);
	struct student max = stu[0], min = stu[0];
	for (i = 0; i < n; i++)
	{
		if (stu[i].score > max.score)
			max = stu[i];
		if (stu[i].score < min.score)
			min = stu[i];
	} 
	printf("%s %s\n", max.name, max.id);
	printf("%s %s\n", min.name, min.id);
	return 0;
}
