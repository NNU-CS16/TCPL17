#include<stdio.h>
void triangle_judge(int a,int b,int c)
{
  if(a+b<c||b+c<a||a+c<b)
  printf("无法构成三角形\n");
  else   if(a==b&&a==c)
     printf("等边三角形\n");
  else   if(a==b&&a!=c)
     printf("等腰三角形\n");
  else   if(a==c&&a!=b)
     printf("等腰三角形\n");
  else   if(b==c&&b!=a)
     printf("等腰三角形\n");
  else   if(a!=b&&b!=c)
     printf("普通三角形\n");
 
  
}
int main()
{
  int a,b,c;
  printf("judge the type of the triangle:");
  scanf("%d%d%d",&a,&b,&c);
  triangle_judge(a,b,c);   
   return 0;
}
