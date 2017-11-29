#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    float score;
};
int main( )
{
    int n, i;
    int min, max, min1, max1;
    printf ("请输入学生个数：");
    scanf ("%d", &n);
    struct Student stu[n];
    printf ("请输入学生信息：");
    for(i = 0; i < n; i++)
    {
	scanf ("%d %s %f", &stu[i].id, stu[i].name, &stu[i].score);
    }
    min = stu[0].score;
    max = stu[0].score;
    for (i = 0; i < n; i++)
    {
	if (stu[i].score < min)
        {
	    min = stu[i].score;
	    min1 = i;
        }
        if (stu[i].score > max)
	{
	    max = stu[i].score;
	    max1 = i;
	}
    }
    printf ("%s %d", stu[max1].name,stu[max1].id);
    printf ("%s %d", stu[min1].name,stu[min1].id);
    return 0;
}
        
 
	
