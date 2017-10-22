#include<stdio.h>
float f(float x);
float a0,a1,a2,a3;
int main()
{
  float a,b;
  scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
  scanf("%f%f",&a,&b);
  if(f(a)==0) 
  {printf("%.2f",a);
  return 0;}
  if(f(b)==0) 
  {printf("%.2f",b);
  return 0;}
  while(b-a>=0.001 && f(a)*f(b)<0)
  {
    if(f((a+b)/2)*f(a)>0) a=(a+b)/2;
    if(f((a+b)/2)*f(b)>0) b=(a+b)/2;
    if(f((a+b)/2)==0) break;        //如果区间中点对应的函数等于零，退出循环
  }
  printf("%.2f",(a+b)/2);
  return 0;
}
  float f(float x)       //定义该函数式
{
  float y;
  y=a3*x*x*x+a2*x*x+a1*x+a0;
  return y;
}
