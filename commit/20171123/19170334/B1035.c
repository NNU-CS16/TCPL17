#include<stdio.h>//PAT 平台中乙级 1035
#include<string.h>
#include<stdlib.h>
int cmp(const void *a, const void *b);
void M(int *b, int *count, int max)
{
 int i = 0, j = 0;
 int min = count[0], total = 0;
 for(i = 0; count[i + 1] != 0; i++)
 {
    if(min > count[i])
    {
        for(j = 2; count[i] % j == 0 && min % j == 0; j *= 2)
            min = j / 2;
    }
 }
 while (total + min * 2 <= max)
 {
    qsort(b+total, min * 2, sizeof(int), cmp);
    total += min * 2;
 }
 if(max - total > min)
     qsort(b + total, min + max % min, sizeof(int), cmp);

}

void I(int *b, int *count)
{
    int i = 0, temp = b[count[0]];
    for(i = count[0] - 1; i >= 0; i--)
    {
        if(temp < b[i])
            b[i+1] = b[i];
        else break;
    }
    b[i+1] = temp;
}

int judge(int *b, int *a, int count, int max)
{
    int i = 0;
    for(i = count; i < max; i++)
        if(a[i] != b[i])
            return 0;
    return 1;
}

int cmp(const void *a, const void *b)
{
    return *(int *)a-*(int *)b;
}

int main()
{
    int n, i, j = 0, flag = 1;
    int a[100]={0}, b[100]={0};
    int count[100]={1};
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&b[0]);
    for(i=1; i<n; i++)
    {
    scanf("%d",&b[i]);
    if(b[i] >= b[i-1])
    if(b[i]<b[i-1])
        count[++j]=1;
    }
    if(judge(a,b,count[0],n) == 0)
        flag = 0;
    if(flag == 1)
    {
    printf("Insertion Sort\n");
    I(b,count);
    }
    else
    {
        printf("Merge Sort\n");
        M(b,count,n);
    }
    for(i=0; i<n; i++)
        printf("%d ",b[i]);
    printf("\n");
    return 0;
}
