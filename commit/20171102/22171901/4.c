#include <stdio.h>
int count1_in_bin (int n);
 
int main()
{
    int n,a;
    scanf ("%d",&n);
    a=count1_in_bin (n);
    printf("%d\n",a);
    return 0;
}

int count1_in_bin (int n)
{
    int i = 0,count = 0;
    for (i = 0 ; i < 32 ; i++)
     {
       if (n % 2 == 1)
          count ++;
          n = n / 2;
     }
    return count;
}
