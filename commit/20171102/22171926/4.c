#include<stdio.h>
int count1_in_bin(int n)
{
     int num=0,i=32;
     if (n==0)
        return 0;
     else 
    {
       while (i!=0)
      {
        if ((i&n)==1)
          num=num+1;
          n=n>>1;
         i--;
      }
     return num;
    }
}

int main()
{
     int n;
     scanf("%d",&n);
     printf("%d\n",count1_in_bin(n));
      return 0;
}
