 #include <stdio.h>
 struct student
 {
    char name[50];
    char number[50];
    int score;
 };
 int main ()
 {
    int n, i;
    int max = 0, min = 0;
    scanf ("%d", &n);
    struct student stu[100];
    for (i = 0; i < n; i++)
        scanf ("%s %s %d", stu[i].name, stu[i].number, &stu[i].score);                                        
    for (i = 0; i < n - 1; i++)
    {
        if (stu[i].score > stu[i + 1].score)
        max = i;
    }
    for (i = 1; i < n - 1; i++)
    {
        if (stu[i].score < stu[i + 1].score)
        min = i;
    }
    printf ("%s %s\n", stu[max].name, stu[max].number);
    printf ("%s %s\n", stu[min].name, stu[min].number);
    return 0;
 }
