#include<stdio.h>
void triangle_judge(int a,int b,int c);
int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if((a+b)>c&&(a+c)>b&&(b+c)>a)
    triangle_judge(a,b,c);
  else printf("These cannot make a triangle");
  return 0;
}
void triangle_judge(int a,int b,int c)
{
     if(a==b)
       {
        if(b==c) printf("equilateral triangle");
        else printf("isosceles triangle");
       }
     else
         {
          if(b==c) printf("isoscelestriangle");
          else printf("commmon triangle");
         }
}

