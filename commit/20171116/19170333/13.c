#include <stdio.h>
struct students{
        char name[10];
        char ID[10];
        int grade;
};
int main ()
{
    int n;
    scanf ("%d", &n);
    struct students results[n];
    int max = 0, index, i, min = 100, m;
    for (i = 0; i < n; i++)
    {
        scanf ("%s %s %d", results[i].name, results[i].ID, &results[i].grade);
        while (getchar () != '\n')
            continue;
    }
    for (i = 0; i < n; i++)
    {
        if (results[i].grade > max)
        {
            max = results[i].grade;
            index = i;
        }
        if (results[i].grade < min)
        {
            min = results[i].grade;
            m = i;

        }
    }
    printf ("%s   %s\n", results[index].name, results[index].ID);
    printf ("%s   %s\n", results[m].name, results[m].ID);
    return 0;
}

