#include <stdio.h>
int count1_in_bin(int n);
int main()
{
       int n;
   printf("请输入n:\n");
   scanf("%d",&n);
   count1_in_bin(n);
   return 0;
}
int count1_in_bin(int n)
{
   int i,m;
   i=1;
   m=0;
   while(i<n)
   i=i*2;
   while(i>0)
        {
        if(i<=n)
        {
        m++;
        n=n-i;
        }
        i=i/2;
        }
   printf("%d\n",m);
}

   
