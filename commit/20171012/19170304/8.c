#include<stdio.h>
int main()
{
  int num,num1,num2,num3;
  
  scanf("%d",&num);
  
  num1=num/16;
  num2=num%16;
  num3=num1*10+num2;
  
  printf("%d",num3);
  
  return 0;
}
