#include<stdio.h>
#include<stdlib.h>
struct Tushu
{
    char shuming[50];
    char zuozhe[20];
    char ISBN[8];
    double float jiage;
    struct Tushu *next;
}
struct Tushu *Createl();
//void Output(struct Tushu *head);
int main()
{
    struct Tushu *head=Createl();
}
struct Tushu *Createl()
{
    char ch;
    int qian;
    FILE *fp;
    fp=fopen(tushu.txt,"r+");
    struct Node *p,*p1;
    while(fp!=EOF)
    {
        p=(struct Node *)malloc(sizeof(struct Node));
        fscanf(tushu.txt,"%s%s%s%d",p->shuming,p->zuozhe,p->ISBN,&p->jiage);
        p=p->next;
    }
    return 
}
