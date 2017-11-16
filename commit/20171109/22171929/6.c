#include <stdio.h>
long a = 0;
void Move(char source, char target);
void Hanoi(int n,char source,char help,char target);
int main()
{
    int n;
    scanf("%d", &n);
    Hanoi(n, 'A', 'B', 'C');
    printf("总步骤数：%ld\n", a);
    return 0;
}
void Move(char source, char target)
{
     printf("%c->%c\n", source, target);
}
void Hanoi(int n,char source,char help,char target)
{
     if(n==1)
        {
        Move(source, help);
        Move(help,target);
        a = a + 2;
        }
     else
     {
        Hanoi(n-1,source,help,target);
        Move(source,help);
        a++;
        Hanoi(n-1,target,help,source);
        Move(help,target);
        a++;
        Hanoi(n-1,source,help,target);
     }
}

