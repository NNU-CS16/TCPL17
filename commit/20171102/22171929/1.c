#include <stdio.h>
void triangle_judge(int a,int b,int c);
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    triangle_judge(x,y,z);
    return 0;
}
void triangle_judge(int a,int b,int c)
{
     if(a+b<=c||a+c<=b&&b+c<=a)
     printf("不能构成三角形");
     else if(a==b&&a==c&&b==c)
     printf("等边三角形");
     else if(a==b||a==c||b==c)
     printf("等腰三角形");
     else printf("普通三角形");
     

}   
