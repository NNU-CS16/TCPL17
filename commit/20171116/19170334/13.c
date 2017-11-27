#include <stdio.h>/*姓名学号成绩*/

struct student{char name[50]; char student_number[50]; int mark;};

int main()
{
	int n;
	scanf("%d", &n);
	struct student stu[100];
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%s %s %d", stu[i].name, stu[i].student_number, &stu[i].mark);
		getchar();
	}
	int max = 0, min = 0;
	for(i = 1; i < n; i++)
	{
		if(stu[i].mark > stu[i - 1].mark)
		max = i;
	}
	for(i = 1; i < n; i++)
    {
        if(stu[i].mark < stu[i - 1].mark)
        min = i;
    }
	printf("%s %s\n", stu[max].name, stu[max].student_number);
	printf("%s %s\n", stu[min].name, stu[min].student_number);
	return 0;
}
