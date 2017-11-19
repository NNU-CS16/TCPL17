#include <stdio.h>
void move(char source,char target)
{
	printf("%c->%c\n",source,target);
}
void hanoi(int n,char source,char help,char target)
{
	if (n == 1)
        move(source,target);
    else
    {
        hanoi(n - 1,source,target,help);
        move(source,target);
        hanoi(n - 1,help,source,target);
    }
}
int main()
{
    hanoi(3,'A','B','C');
    return 0;
}

