#include<stdio.h>
void Move(char a,char c);
void Hanoi(int n,char a ,char b,char c);
int main()
{
    int n,sum,*pb;
    printf("Please input a n:\n");
    scanf("%d",&n);
    Hanoi(n,'A','B','C');
    sum=*pb;
    *pb=*p;
    printf("%d\n",sum);
    return 0;
}
void Move(char a,char c)
{
    int i=0;int *p;
    i=i++;
    p = &i ;
    printf("%c->%c ",a,c);
}

void Hanoi(int n,char a ,char b,char c)
{
    if(n==1) Move(a,c);
    else
    {
        Hanoi(n-1,a,b,c);
        Move(a,c);
        Hanoi(n-1,b,a,c);
    }
}
