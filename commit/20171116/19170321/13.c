    #include <stdio.h>
    struct student
    {
        char name[10];
        char id[10];
        int score;
    };
    int main()
    {
         int n, i, max = 0, min = 0;
         scanf("%d", &n);
         struct student stu[n];
         for (i = 0; i < n; i++)
         {
             scanf ("%s %s %d", stu[i].name, stu[i].id, &stu[i].score);
         }
         for (i = 0; i < n - 1; i++)
             if (stu[max].score < stu[i + 1].score)
                 max = i + 1;
         printf("%s %s\n",  stu[max].name, stu[max].id);
         for (i = 0; i < n - 1; i++)
             if (stu[min].score > stu[i + 1].score)
                 min = i + 1;
         printf("%s %s\n",  stu[min].name, stu[min].id);
         return 0;
    }
