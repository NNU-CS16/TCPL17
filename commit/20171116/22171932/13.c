#include <stdio.h>
#include <stdlib.h>
struct Student
{
     char name[10];
     char id[20];
     float score;
};
struct Student * Input(int n);
void Output(struct Student stu[],int n);

int main()
{

    struct Student *pstus;
    int n;
    scanf("%d",&n);
    pstus = Input(n);
    Output(pstus,n);
    free(pstus);
    return 0;
}
struct Student * Input(int n)
{
    int i;
    struct Student * pstus = (struct Student *)calloc(n,sizeof(struct Student));
    for (i = 0; i < n; i++)
	scanf("%s%s%f",pstus[i].name,pstus[i].id,&pstus[i].score);
    return pstus;
}
void Output(struct Student stu[],int n)
{
    int i,j,a = stu[0].score,b = stu[0].score;
    int x = 0,y = 0;
    for (i = 1; i < n; i++)
    {
	if (a < stu[i].score)
	{
	    a = stu[i].score;
	    x = i;
	}
    }
    for (j = 1; j < n; j++)
    {
        if (b > stu[j].score)
	{
            b = stu[j].score;
            y = j;
	}
    }

    printf("%s, %s\n", stu[x].name,stu[x].id);
    printf("%s, %s\n", stu[y].name,stu[y].id);
}
