#include <stdio.h>
void Move(char source,char help,char target);
void Hanoi1(int n,char source,char help,char target);
int Hanoi(int a);
int main()
{
    int a,b;
    scanf("%d", &a);
    b = Hanoi(a);
    printf("%d", b);
    Hanoi1(3,'A','B','C');
   return 0;
}
int Hanoi(int a)
{
    if (a == 1)
    return 2;
    else 
    return 3 * Hanoi(a - 1) + Hanoi(1);
}
void Move(char source,char help,char target)
{
    printf("%c -> %c\n", source, help);
    printf("%c -> %c\n", help, target);
}
void Hanoi1(int n,char source,char help,char target)
{
    if (n == 1) Move(source, help, target);
    else
    {
        Hanoi1(n - 1,source, help, target);
        printf("%c -> %c\n",source,target);
        Hanoi1(n - 1,target, help,source);
        printf("%c -> %c\n",help,target);
        Hanoi1(n - 1,source,help,target);
    }
}        
