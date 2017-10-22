#include <stdio.h>
int main()
{
  int m,n;
  scanf("%d%d",&m,&n);
  int a=m,b=n;
  int temp;
  while(b)
  {
    temp=a%b;
    a=b;
    b=temp;
  }
  printf("%d/%d\n",m/a,n/b);
  return 0;
}
