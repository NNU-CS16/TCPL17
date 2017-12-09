#include<stdio.h>
int zy(int i,int n,int arr[])
{
 int k=1;
  int j;
  int t=i;
  for (j=i; j>0; j--)
  {
  if(arr[t]<arr[j-1])
    k=0; 
  }
  for (j=i; j<n-1; j++)
  {
  if(arr[t]>arr[j+1])
    k=0;
  }
  if(k) return 1;
  else return 0;
}
int main()
{
  int str[100];
  int n;
  int sum=0;
  int a[100];
  int i;
  scanf("%d",&n);
  for(i=0; i<n; i++)
    scanf("%d",&str[i]);
  for (i=0; i<n; i++)
  {
    if(zy(i,n,str))
    {
      a[sum]=str[i];
      sum += 1;
    }
  }
  printf("%d\n",sum);
  for(i=0; i<sum; i++)
  printf("%d ",a[i]);
  printf("\n");
  return 0;
}
