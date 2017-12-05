#include <stdio.h>
int bin_insert( int n, int m, int j, int i )
{
    return  ~( ~( ~0 << ( i - j + 1 ) ) << j ) & n  |  m << j ;
}
int main()
{
  int n,m,j,i;
  printf("输入两个整数:  \n");
  scanf("%d%d",&n,&m);
  bin_insert(n,m,j,i);
  return 0;
}
