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
    static int c=0;
    if(n==1)
    c+=2;
    else
    {
    Hanoi(n-1,source,help,target);
    c++;
    Hanoi(n-1,target,help,source);
    c++;
    Hanoi(n-1,target,help,source);
    }
  return c;
}

