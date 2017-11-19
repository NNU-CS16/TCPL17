#include<stdio.h>
void triangle_judge(int a,int b,int c)
{
    if(a+b<=c||a+c<=b||b+c<=a)
        printf("It is not a triangle\n");
    else if(a==b||a==c||b==c) 
{
    if(a==b&&b==c)
        printf("equilateral triangle\n");
    else
        printf("equicrural triangle\n");
}
    else 
        printf("triangle\n");
}
    int main()
{
    int a,b,c;
    printf("Please input triangle's three length of side:\n");
    scanf("%d%d%d",&a,&b,&c);
    triangle_judge(a,b,c);

    return 0;
}
    
