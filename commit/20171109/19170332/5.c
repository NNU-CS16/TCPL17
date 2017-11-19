#include<stdio.h>
int i=0;
int hanoi(int n,char source,char help,char target);

int main()
{
   int n,i=0;
   scanf("%d",&n);
   int x=hanoi(n,'A','B','C');
   printf("%d\n",x);
   return 0;
}

int hanoi(int n,char source,char help,char target)
{
    if(n==1)
       i++;
    else
    {
        hanoi(n-1,source,target,help);
        i++;
        hanoi(n-1,help,source,target);
    }
   int x=2*i;
   return x;
}

