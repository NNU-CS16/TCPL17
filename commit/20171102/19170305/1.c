#include<stdio.h>
#include<math.h>
void triangle_judge(int, int, int);

int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
triangle_judge(a,b,c);
return 0;
}

void triangle_judge(int a, int b, int c)
{
if(a+b>c&&fabs(a-b)<c)
{
if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
printf("三角形是等腰三角形\n");
else if(a==b&&a==c)
printf("三角形是等边三角形\n");
else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
printf("三角形是直角三角形\n");
else
printf("三角形是普通三角形\n");
}
else
printf("a,b,c不能构成三角形\n");
}
