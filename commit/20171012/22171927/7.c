#include<stdio.h>
int main()
{
  int a;
  int i,j,k,m;
  scanf("%d",&a);
  i=a%10;
  j=((a-i)/10)%10;
  k=(((a-1)-j*10)/100)%10;
  m=i*100+j*10+k;
  printf("%d\n",m);
  return 0;
}
