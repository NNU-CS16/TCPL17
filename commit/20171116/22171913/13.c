#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    char id;
    float score[20];
};
int main()
{
    int m, k, n, i;
    printf("请输入学生数： ");
    scanf("%d", &n);
    struct Student stu[n];
    struct Student max;
    struct Student min;
    for (i = 0; i < n; i++)
    {
	scanf("%s", stu[i].name);
	scanf("%s", stu[i].id);
	scanf("%f", &stu[i].score);
    }
    for (k = 0; k < n; k++)
    {
	for (m = k + 1; m < n + 1; m++)
        {
	    if (stu[k].score < stu[m].score)
	    {
		max = stu[k];
		stu[k] = stu[m];
		stu[m] = max;
	    }
	}
    }
    printf("%s %s\n", stu[0].name, stu[0].id);
    printf("%s %s\n", stu[n-1].name, stu[n-1].id);
    return 0;
}
