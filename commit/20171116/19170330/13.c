#include <stdio.h>

struct student
{
    char name[1000];
    char number[1000];
    int point;
    }
    stu[1000];

int main ()
{
    int n,i,j;
    struct student t;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%s%s%d",stu[i].name,stu[i].number,stu[i].point);
    for (i=n-1;i>0;i--)
        for (j=0;j<i;j++)
            if (stu[j].point<stu[j+1].point)
          {  t=stu[j];
             stu[j]=stu[j+1];
             stu[j+1]=t;
             }

     printf("%s %s\n",stu[0].name,stu[0].number);
     printf("%s %s\n",stu[n-1].name,stu[n-1].number);
     return 0;
}
