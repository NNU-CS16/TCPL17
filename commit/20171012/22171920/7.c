#include<stdio.h>
int main()
{
  int a,b,c,d;
  
  printf("请输入一个三位数：");
  scanf("%3d",&a);
  
  b=a/100;
  c=(a-b*100)/10;
  d=a%10;
  
  if(d=0,c!=0)
  printf("a的逆序是%d\n",c*10+b);
  if(c=0,d=0)
  printf("a的逆序是:%d\n",d);
  if(d!=0,c!=0)
  printf("a的逆序是%d\n",d*100+c*10+b);
  
  return 0;
}
  
