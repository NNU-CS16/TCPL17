#include <stdio.h>
int main()
{
    struct stdent{
                   char name[10];
                   char num[10];
                   int score;
                  };
    struct student* stu[100];
    int n, i;
    int max=0, min=0;
    scanf("%d", &n);
    printf("%d\n", n);
    for (i=0; i<n; i++)
        scanf("%s %s %d",stu[i]->name, stu[i]->num, &stu[i]->score);
    for (i=0; i<n; i++)
    {
        if (stu[i]->score>stu[max]->score)
            max=i;continue;
        if (stu[i]->score<stu[min]->score)
            min=i;
    }
    printf ("%s %s %d\n", stu[max]->name, stu[max]->num, stu[max]->score);
    printf ("%s %s %d\n", stu[min]->name, stu[min]->num, stu[min]->score);
    return 0;
}
