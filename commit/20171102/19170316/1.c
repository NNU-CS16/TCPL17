#include<stdio.h>
void triangle_judge(int a,int b, int c)
{
if (a+b>c && b+c>a && a+c>b)
{if(a==b && b==c)
printf("三角形是等边三角形");
if ((a==b&&b!=c) || (a==c&&a!=b) || (b==c&&a!=b))
printf("三角形是等腰三角形");
if(a!=b&&b!=c&&a!=c)
printf("三角形是普通三角形");
}
else
printf("无法构成三角形");
}
int main()
{
int a,b,c;
printf("please input three number a,b,c");
scanf("%d%d%d",&a,&b,&c);
triangle_judge(a,b,c);
return 0;
}
