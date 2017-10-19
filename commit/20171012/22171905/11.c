#include <stdio.h>
void printf(char,char,char,char);
int back(int,int,int);
int main()
{
  int n;
  scanf("%d"&n);
  printf(n,n+1,n+2,n+3);
  printf(n+1,n,n+2,n+3);
  printf(n+2,n,n+1,n+3);
  printf(n+3,n,n+1,n+2);
  return 0;
}

void printf(int a,int b,int c,int d)
{
  printf("%d %d %d %d %d %d\n",back(a,b,c),back(a,b,d),back(a,c,b),back(a,c,d),back(a,d,b)back(a,d,c));
  return ;
}

int back(int a,int b,int c)
{
  return a*100+b*10+c;
}

