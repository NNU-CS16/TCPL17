#include <stdio.h>
int time = 0;
void move(char source,char target)
{
    printf("%c -> %c\n",source,target);
    time++;
}
void hanoi(int n,char a,char b,char c)
{
    if (n == 1)
    {
        move(a,b);
        move(b,c);
    }
    else
    {
        hanoi(n - 1,a,b,c);
        move(a,b);
        hanoi(n - 1,c,b,a);
        move(b,c);
        hanoi(n - 1,a,b,c);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    printf("%d",time);
    return 0;
}
