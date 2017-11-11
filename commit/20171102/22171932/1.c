#include<stdio.h>
void triangle_judge(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("请输入三角形边长：\n");
    scanf("%d%d%d",&a,&b,&c);
    triangle_judge(a,b,c);
    return 0;
}
void triangle_judge(int a,int b,int c)
{
    if(a+b>c&&b+c>a&&a+c>b)
      {
       if(a==b&&b==c)
          printf("等边三角形\n");
          else if(a==b||b==c||a==c)
                  printf("等腰三角形\n");
               else printf("普通三角形\n");
      }
   else printf("无法构成三角形\n");
} 

