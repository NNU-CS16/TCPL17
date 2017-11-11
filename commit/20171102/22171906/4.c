#include <stdio.h>
int count1_in_bin(int n)
{
 int a,i;
 if (n==0)
 return 0;
 else 
  {
   while (i!=0)
    {
     if ((i&n)==1)
        a=a+1;
        n=n>>1;
        i--;
    }
   return a;
  }
}

int main()
{
     int n;
     scanf ("%d",&n);
     printf ("%d\n",count1_in_bin(n));
      return 0;
}
