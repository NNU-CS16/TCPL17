#include<stdio.h>
#include<stdlib.h>
void triangle_judge(int a, int b, int c)


{
if(a+b>c&&a+c>b&&b+c>a)
 {
   if(a==b||b==c||a==c)
     {
         if(a=b=c)
         printf("这是一个等边三角形\n");
         else  printf("这是一个等腰三角形\n");
     }
   if(a!=b&&b!=c&&a!=c)
          printf("这是一个普通三角形\n");
 }
else  printf("这不能构成一个三角形\n");

}
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);

triangle_judge(a,b,c);
return 0;

}
