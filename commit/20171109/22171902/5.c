#include<stdio.h>
int Hanoi(int n,char source,char help,char target);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",Hanoi(n,'A','B','C'));

    return 0;
}


int  Hanoi(int n,char source,char help,char target)
{
    static int c;
    if(n==1)
    c++;
    else
    {
    Hanoi(n-1,source,target,help);
    c++;
    Hanoi(n-1,help,source,target);
    }
  return c*2;
}

