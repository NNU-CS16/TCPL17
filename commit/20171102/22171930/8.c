#include <stdio.h>
int LCM(int m,int n);
int main()
{
    int m,n;
    scanf("%d%d", &m, &n);
    LCM(m,n);
    return 0;
}
 LCM(int m,int n)
{
    int a,i,b;
    i = m%n;
    a = m*n;
    while (i != 0)
 { 
     m = n;
     n = i;
     i = m%n;
 }
     b = a/n;
     printf("%d", b);
}

  

   

  
