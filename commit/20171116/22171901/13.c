#include <stdio.h>
struct stu
{
    char name[10];
    char id[10];
    int score;
};

void sort(struct stu a[], int n);


int main()
{
    int n , i;
    scanf ("%d" , &n);
    struct stu a[n];

    for (i = 0; i < n; i++)
        scanf ("%s %s %d" , a[i].name , a[i].id , a[i].score);
    sort (a , n);
    return 0;
}

void sort(struct stu a[], int n)
{
    int i , max = 0 , min = 0;
    for (i = 1; i < n; i++)
    {
        if (a[i].score > a[max].score)
            max = i;
    }

    for (i = 1; i < n; i++)
    {
        if (a[i].score < a[min].score)
            min = i;
    }

    printf("%s %s\n", a[max].name , a[max].id);
    printf("%s %s\n", a[min].name , a[min].id);
}

