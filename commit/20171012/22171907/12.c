#include<stdio.h>
int main()
{
  int a,b;
  int x,y,z;
  scantf("%d/%d",&a,&b);
  if (a==b) {printf("1/1"); return 0;}
  if (a>b) {x=a;y=b;}
  else {x=b;y=a;}
  while (x%y!=0)
  {
    z=x%y;
    x=y;
    y=z;
  }；  ／／辗转相除法求最大公约数
printf ("%d/%d\n",a/y,b/y);
return 0;
}
