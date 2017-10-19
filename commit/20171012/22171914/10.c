#include <stdio.h>
float f(float x);
float a3,a2,a1,a0;
int main()
{
  float a,b;

  scanf("%d%d%d%d",&a1,&a2,&a3,&a0);
  scanf("%d%d",&a,&b);
  float left,mid,right;
  left=a;
  right=b;
  while(left<=right-0.001&&f(left)*f(right)<=0)
  {
    if(f(left)==0)
    {
      printf("%d",left);
      return 0;
    }
    if(f(right)==0)
    {
      printf("%d",right);
      return 0;
    }
    mid=(left+right)/2;
    if(f(mid)*f(left)>0)
    {
      left=mid;
    }
    else
    {
      right=mid;
    }
    printf("%d",mid);
    return 0;
}
float f( float x)
{
  float result;
  result=a3*x*x*x+a2*x*x+a1*x+a0;
  return result;
}
}  





























































































