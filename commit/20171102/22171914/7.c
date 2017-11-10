#include <stdio.h>
int GCD_recursive(int m,int n)
{
  int sum;
  do
  {
  sum=m%n;
  m=n;
  n=sum;
  } 
  while(sum); 
    return m;
} 



  
int main()
{
  int m,n;
  printf("输入两个数:\n");
  scanf("%d%d",&m,&n);
  GCD_recursive;
  printf("最大公约数是:%d\n");
  return 0;
}  
