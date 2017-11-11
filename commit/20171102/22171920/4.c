#include<stdio.h>
int count1_in_bin(int n)
{
  int count=0;
  while (1&&n)
  {
     count+=1;
     n=n>>1;  
  }
  return count;
}
int main()
{
  int n,count;
  scanf("%d",&n);
  printf("%d\n",count1_in_bin(n));

  return 0;
}
