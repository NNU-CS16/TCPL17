#include <stdio.h>
int add(int n1,int n2)
{
  int z;

  z=&(((char *)n1[n2]));
  return z;
}
int main()
{
  int n1,n2;
  scanf("%d%d",&n1,&n2);
  printf("%1d",add(n1,n2));
  return 0;
} 
