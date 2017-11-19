#include<stdio.h>
void Move(char source,char target);
void hanoi(int n,char source,char help,char target);

int main()
{
    hanoi(3,'A','B','C');
    return 0;
}

void Move(char source,char target)
{
    printf("%c->%c\n",source,target);
}

void hanoi(int n,char source,char help,char target)
{
    if(n==1) Move(source,target);
    else
    {
	hanoi(n-1,source,target,help);
        Move(source,target);
	hanoi(n-1,help,source,target);
    }
}
