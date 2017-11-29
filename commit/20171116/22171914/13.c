#include <stdio.h>
#include <stdlib.h>


int main()
{
    struct student
    {
        char name[10];
        char num[10];
        int  score;
    }a[20];
    int t,j,max=0,min=0;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%s %s %d",a[j].name,a[j].num,&a[j].score);
        if(a[j].score>a[max].score) max=j;
        if(a[j].score<a[min].score) min=j;
    }
    printf("%s %s\n",a[max].name,a[max].num);
    printf("%s %s\n",a[min].name,a[min].num);
    return 0;
} 
