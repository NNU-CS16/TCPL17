#include<stdio.h>
void triangle_judge(int a,int b,int c);
int main()
{
int a,b,c;
printf("请输入三个整数值");
scanf("%d %d %d\n",&a,&b,&c);
triangle_judge(a,b,c);
return 0;
}
void triangle_judge(int a,int b,int c)
{
    if (a+b>c && a+c>b && c+b>a)
        {if (a==b||b==c||c==a)
              {
              if (a==b&&b==c&&a==c) 
               printf("等边三角形\n");
              else printf("等腰三角形\n");
              }
         else printf("普通三角形\n");
        }
    else printf("不构成三角形\n");      

}
