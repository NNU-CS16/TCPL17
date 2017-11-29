#include <stdio.h>

struct student
    {char name[10];
     char number[10]; 
     int score;};

int main()
{
    int n;
    scanf("%d", &n);
    struct student stu[10];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %d", stu[i].name, stu[i].number, stu[i].score);
	getchar();
    }
    int max = 0, min = 0;
    for (i = 1; i < n; i++)
   {
        if(stu[i].score > stu[i - 1].score)
	max = i;
    }
    for (i = 1; i < n; i++)
    {
        if(stu[i].score < stu[i - 1].score)
        min = i;
    }
    printf("%s%s%d\n", stu[max].name, stu[max].number,stu[max].score);
    printf("%s%s%d\n", stu[min].name, stu[min].number,stu[max].score);
    return 0;
}
