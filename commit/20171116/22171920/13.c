#include <stdio.h>
	struct student
	{
    	char id[20];
    	char name[20];
    	int score;
	};
int main()
{
    int n, i = 0, j = 0;
    printf("学生人数:");
    scanf("%d", &n);
    struct student stu[n];
    struct student max;
    struct student min;
    for (i = 0; i < n; i++)
    {
        scanf ("%s", stu[i].name);
        scanf ("%s", stu[i].id);
        scanf("%d", &stu[i].score);  
    }
	int k, l;
    for (k = 0; k < n ; k++)
    {
        for (l = k + 1; l < (n+1); l++)
        {
            if(stu[k].score < stu[l].score)
            {
                max = stu[k];
                stu[k] = stu[l];
                stu[l] = max;
            }
        }
    }
    printf ("%s %s\n", stu[0].name, stu[0].id);
    printf("%s %s\n", stu[n-1].name, stu[n-1].id); 
    return 0;
} 
