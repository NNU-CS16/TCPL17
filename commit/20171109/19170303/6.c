#include<stdio.h>

void move (char a, char c)
{
    printf("%c->%c\n",a,c);

}

void Hanoi (int n, char a, char b, char c)
{
 if (n == 1)
 {
     move(a,b);
     move(b,c);
 }
 else
 {
     Hanoi(n-1,a,b,c);
     move(a,b);
     Hanoi(n-1,c,b,a);
     move(b,c);
     Hanoi(n-1,a,b,c);
 }
}

int main()
{
    int n;
    scanf("%d",&n);
    Hanoi(n,'A','B','C');
    return 0;
}
