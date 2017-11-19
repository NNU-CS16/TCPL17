#include <stdio.h>
int num(int n);
void move(char a,char b);
void hanoi(int n,char a,char b,char c);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",num(n));
    hanoi(n,'a','b','c');
    return 0;
}
int num(int n)
{
     if(n==1)
         return 2;
     else
         return num(n-1)*3+2;
}
void move(char a,char b)
{
     printf("%c->%c\n",a,b);
}
void hanoi(int n,char a,char b,char c)
{
     if(n==1)
     {
         move(a,b);
         move(b,c);
     }
     else
     {
         hanoi(n-1,a,b,c);
         move(a,b);
         hanoi(n-1,c,b,a);
         move(b,c);
         hanoi(n-1,a,b,c);
      }
}

