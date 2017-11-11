#include <stdio.h>
int LCM (int m , int n);

int main()
{
    int m,n,res;
    scanf ("%d%d",&m,&n);
    LCM (m,n);
    return 0;
}

int LCM (int m , int n)
{
    int temp;
    if (m < n)
    {
      temp = m;
      m = n;
      n = temp;
    }
    int a = m % n , r;
    int x = m, y = n;
    if (a == 0)
      printf ("%d\n",m);
 
    else 
    {
      m = n;
      n = a;
      a = m % n;
    }
    r = x * y / n;
    printf ("%d\n",r);
}  
