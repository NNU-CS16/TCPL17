    #include <stdio.h>
    struct student
    {
        char name[10];
        char num[20];
        int score;
    };
    int main()
    {
        int n, i, j;
        scanf("%d",&n);
        struct student stu[n];
        struct student stutemp;
        for (i = 0; i < n; i++)
        {
            scanf("%s", stu[i].name);
            scanf("%s", stu[i].num);
            scanf("%d", &stu[i].score);
        }
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (stu[j].score > stu[j + 1].score)
                {
                    stutemp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = stutemp;
                }
            }
        }
        printf("%s %s\n", stu[n -1].name, stu[n - 1].num);
        printf("%s %s\n", stu[0].name, stu[0].num);
        return 0;
    }


