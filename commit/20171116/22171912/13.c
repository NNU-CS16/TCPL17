/*13.c_学生成绩*/
#include <stdio.h>

int main()
{
    struct student
    {
        char name[10];
        char num[10];
        int  score;
    }a[20];
    int n, j, max=0, min=0;
	printf("请输入学生人数：");
    scanf("%d", &n);
    printf("请输入学生成绩：\n");
    for(j = 0; j < n; j++)
    {
        scanf("%s %s %d", a[j].name, a[j].num, &a[j].score);
        if(a[j].score > a[max].score)
			max = j;
        if(a[j].score < a[min].score)
			min = j;
    }
    printf("最高：%s %s\n", a[max].name, a[max].num);
    printf("最低：%s %s\n", a[min].name, a[min].num);
    return 0;
}

