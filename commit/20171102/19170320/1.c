#include <stdio.h>
void triangle_judge(int a,int b,int c);
void triangle_judge(int a,int b,int c)
{
    int x;
    if (a+c>b&&a+b>c&&b+c>a)
    {
        if (a==b||b==c)
        {
            if (b==c&&a==b)
            x=1;
            else
            x=-1;
        }
        else
        x=0;
    }
    else
    x=2;
}
int main()
{
    int x,a,b,c;
    printf("请输入三角形的边长a b c\n");
    scanf("%d %d %d",&a,&b,&c);
    triangle_judge(a,b,c);
    if (x=1)
    printf("等邊三角形\n");
    if (x=-1)
    printf("等腰三角形\n");
    if (x=0)
    printf("普通三角形\n");
    if (x=2)
    printf("不存在這樣的三角形\n");
    return 0;
}
