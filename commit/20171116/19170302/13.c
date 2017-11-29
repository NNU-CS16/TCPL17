#include <stdio.h>

struct student
{
        char id[10];
        char name[10];
        int score;
};

int main()
{
        int n,i;
        scanf("%d",&n);
        struct student stu[n];
        for(i=0;i<n;i++)
        {
                scanf("%s%s%d",stu[i].id,stu[i].name,&stu[i].score);
        }
        int min=stu[0].score,max=stu[0].score,p=1,q=1;
        for(i=0;i<n;i++)
        {
                if(min>stu[i].score)
                {
                        min=stu[i].score;
                        p=i;
                }
                if(max<stu[i].score)
                {
                        max=stu[i].score;     
                        q=i;
                }
        }
       
        printf("%s %s %d\n",stu[q].id,stu[q].name,stu[q].score);
        printf("%s %s %d\n",stu[p].id,stu[p].name,stu[p].score);
        return 0;
}

               
