#include<stdio.h>
int main()
{
  int n,m,i;
   scanf("%d %d",&n,&m);
  int a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    if(i>=0 && i<=m-1)
      printf("%d ",a[i+n-m]);
    if(i>=m && i<n-1)
      printf("%d ",a[i-m]);
    if(i==n-1)
      printf("%d",a[i-m]);
  }
  return 0;
}
