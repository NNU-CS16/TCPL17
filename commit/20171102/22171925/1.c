#include <stdio.h>
void triangle_judge(int a,int b,int c)
{   if (a == b && a == c)
    printf("等边三角形\n");
    else if (a != b && a != c && b != c)
    printf("普通三角形\n");
    else if (a == b && a != c)
    printf("等腰三角形\n");
    else if (a == c && a != b)
    printf("等腰三角形\n");
    else if (b == c && b !=a )
    printf("等腰三角形\n");}
int main()
{   int a,b,c;
    printf("请输入三边的长度\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a + b > c && a + c > b && b + c > a)
    triangle_judge(a,b,c);
    else printf("不可以构成三角形\n");
    return 0; 
}
