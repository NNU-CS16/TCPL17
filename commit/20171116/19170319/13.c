#include <stdio.h>
int main()
{
    struct student
    {
        char name[11];
        char id[11];
        int score;   
    }num[10000];
    int i,n,max,min;
    scanf("%d ",&n);
    for (i = 0;i < n;i++)
        scanf("%s %s %d",num[i].name,num[i].id,&num[i].score);
    for (i = 0,max = 0,min = 0;i < n;i++)
    {
        if (num[i].score > num[max].score)
            max = i;
        if (num[i].score < num[min].score)
            min = i;
    }
    printf("%s %s\n",num[max].name,num[max].id);
    printf("%s %s\n",num[min].name,num[min].id);
    return 0;
}
