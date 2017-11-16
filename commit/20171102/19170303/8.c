#include<stdio.h>
int LCM(int m,int n)
{
    int i;
    int m1=m;
    int n1=n;
    if ( n > m ) 
{  
    m = m+n; 
    n = m-n; 
    m = m-n;                        
}
    int a = m % n;
    while ( a != 0)
{
 m = n;
 n = a;
 a = m % n;
}
 m1=m1/n;
 n1=n1/n;
 i = (n1 * m1 )* n;
}

int main()
{
 int m,n;
 scanf ("%d%d", &m, &n);
 printf("%d\n", LCM(m,n));
 return 0;
}
