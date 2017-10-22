#include <stdio.h>
int main()
{
 int sum=0,a,n,m=0,i=0;
 
 printf("a,n=");
 scanf("%d,%d",&a,&n);
 while(i<=n)
 {
  sum=sum+m;
  m=10*m+a;
  i++;
 }
 printf("sum=%d",sum);
 return 0;
}
