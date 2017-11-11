#include<stdio.h>
void triangle_judge(int a,int b,int c);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
triangle_judge(a,b,c);
return 0;
}

void triangle_judge(int a,int b,int c)
{
    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a==1)
{
if (a==b&&b==c&&a==c)
    printf("等边三角形\n");
else if(a==b||b==c||a==c)
    printf("等腰三角形\n");
else 
    printf("普通三角形\n");
}
else 
printf("非三角形\n");
}
