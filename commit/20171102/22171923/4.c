#include<stdio.h>
int count1_in_bin(int n)
{
  int a=0,i=0,b;
  while(n)
  {
    n=n/2,a=n%2;
    if(a==1)
    i++;
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d\n",count1_in_bin(n));
  return 0;
}
    
  
