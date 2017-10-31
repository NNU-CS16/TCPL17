#include<stdio.h>
int main( )
{
  int a[100];
  int i,j,k,m,n,b=0;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++);
  {
   scanf("%d",&a);
  }
  for(j=0;j<m;j++)
  {
    b=a[n-1];
    for(k=n-1;k>=0;k--)
    {
      a[k]=a[k-1];
      if(k==0)
        a[k]=b;
        }
     }
for(i=0;i<n;i++)
{
  if(i==n-1)
  printf("%d",a[i]);
  else
    printf("%d ",a[i]);
}
return 0;
}
