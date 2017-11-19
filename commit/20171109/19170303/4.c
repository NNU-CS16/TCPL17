#include <stdio.h>
int step(int n,int a,int b)
{
if (n == 0 || n==1)
    return a;
if (n == 2)
    return b;
return step(n-1, b%10007, a+b%10007);
}

int main()
{
 int n,k,i,sum=0;
 scanf("%d%d", &n, &k);
 if(k == 1)
     printf("%d\n",n);
 else
 {
 for (i=1; i<=k; i++)
 {
     sum+=step(n-i,1,2);
     if(n-i>=0) continue;
 }
 printf("%d\n",sum);
 }
return 0;
}
