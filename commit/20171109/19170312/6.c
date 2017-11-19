#include<stdio.h>
void Move(char a,char c);
void Hanoi(int n,char a,char b,char c);
static int i=0;
int main()
{
    int n;
    scanf("%d",&n);
    Hanoi(n,'A','B','C');
    printf("Total steps:%d\n",i);
    return 0;
}
void Move(char a,char c)
{
    printf("%c->%c\n",a,c);
    i++;
}
void Hanoi(int n ,char a,char b,char c)
{
    if(n==1)
    {
        if(b=='B')
        {Move(a,b);Move(b,c);}
        else Move(a,c);
    }
    else
    {
        if(b=='B')
        {
            Hanoi(n-1,a,b,c);
            Move(a,b);
            Hanoi(n-1,c,b,a);
            Move(b,c);
            Hanoi(n-1,a,b,c);
        }
        else
        {
            Hanoi(n-1,a,c,b);
            Move(a,c);
            Hanoi(n-1,b,a,c);
        }
    }
}
