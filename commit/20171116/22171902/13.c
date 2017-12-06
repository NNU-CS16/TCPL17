#include <stdio.h>
struct student
{
    char na[10];
    char id[10];
    int sc;
};

void sort(struct student a[], int n);
int main()
{
    int n, i;
    scanf("%d", &n);
    struct student a[n];
    for (i=0;i<n;i++)
        scanf("%s %s %d", a[i].na, a[i].id, &a[i].sc);
    sort(a, n);
    return 0;

}

void sort(struct student a[], int n)
{
    int i, j=0,k=0;
    for (i=1;i<n;i++)
    {
        if (a[i].sc>a[j].sc)
            j=i;
    }
    for (i=1;i<n;i++)
    {
        if (a[i].sc<a[k].sc)
            k=i;
    }
    printf("%s %s\n", a[j].na,a[j].id);
    printf("%s %s\n", a[k].na,a[k].id);

}


