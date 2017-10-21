#include <stdio.h>
int main()
{
  int n,a,i=1,sum=0,j;	
  printf("n=");
  scanf("%d",&n);
  printf("a=");
  scanf("%d",&a);
  j=a;

  while(i<=n)
  {
   sum=sum+j;
   j=j*a;
   i=i+1;
   }
 
 printf("sum=%d\n",sum); 
 return 0;

}
