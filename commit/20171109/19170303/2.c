#include <stdio.h>
void move (char source,char target);
void Hanoi (int n, char source, char help, char target);

int main()
{
    int n;
    scanf("%d",&n);
    Hanoi(n,'A','B','C');
    return 0;
}

void move(char source,char target)
{
    printf("%c->%c\n",source,target);
}

void Hanoi (int n, char source, char help, char target)
{
    if (n == 1)
        move (source,target);
    else
    {
    Hanoi(n-1,source,target,help);
    move(source,target);
    Hanoi(n-1,help,source,target);
    }
}
