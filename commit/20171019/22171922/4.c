#include<stdio.h>
#include<math.h>
int main()
{
 int i,n,j,flag=0;
 scanf("%d",&n);
 for(i=1;i<sqrt(n);i++)
  for(j=i;j<sqrt(n);j++)
  if(i*i+j*j==n)
  {
   printf("%d %d\n",i,j);
   flag=1;
  }
  if(flag==0)
  printf("No Solution\n");
  return 0;
}
