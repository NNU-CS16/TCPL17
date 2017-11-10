#include <stdio.h>
int GCD_recursive (int m, int n);
int GCD_iterative (int m, int n);

int main()
{
    int m , n , r , i;
    scanf ("%d%d",&m,&n);
    r = GCD_recursive (m , n);
    i = GCD_iterative (m , n);
    printf ("r=%d,i=%d\n",r,i);
    return 0;
}


int GCD_iterative (int m ,int n)
{   
    int temp;
    if (m < n)
    {
      temp = m;
      m = n;
      n = temp;
    }
   
    int a = m % n;
    while (a != 0)
    {
      m = n;
      n = a;
      a = m % n;
    }
    return n;
}


int GCD_recursive (int m , int n)
{
    int temp;
    if (m < n)
    {
      temp = m;
      m = n;
      n = temp;
    }
    int a = m % n,b;
    if (a != 0)
    {
    m = n;
    n = a;
    b = GCD_recursive (m,n);
    return b;
    }
    else
    return n;
}
    
       
    
 
