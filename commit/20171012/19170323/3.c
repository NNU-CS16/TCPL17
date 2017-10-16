#include <stdio.h>
int main()
{
  int i,j,a,n,sum=0,sn=0;
  printf("input a,n:\n");
  scanf("%d%d",&a,&n);
  
  for(i=1;i<=n;i++)
{
  for(j=1;j<=i;j++)
   sum=sum*10+a;
   sn=sn+sum;
   sum=0;
}

  printf("a+aa+aaa+...+%d\n",sn);
 
  return 0;
}
