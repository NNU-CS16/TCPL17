#include<stdlib.h>
#include<stdio.h>
int main()
{
struct student{
                char name[10];
                char number[10];
                int score;};
int N,i;
scanf("%d",&N);
struct student* list[N];
for (i=0;i<N;i++)
        {
        list[i]=(struct student*)malloc(sizeof(struct student));
        scanf("%s%s %d",list[i]->name,list[i]->number,&(list[i]->score));
        }
int max=0,min=0;
for (i=0;i<N;i++)
        {
        if (list[i]->score>list[max]->score)
                {max=i;continue;}
        if (list[i]->score<list[min]->score)
                min=i;
        }
printf("%s %s %d\n%s %s %d\n",list[max]->name,list[max]->number,list[max]->score,list[min]->name,list[min]->number,list[min]->score);
return 0;
}
