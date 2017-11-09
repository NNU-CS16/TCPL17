#include<stdio.h>
#include<stdlib.h>
void triangle_judge(int a,int b,int c)
{
    if(a+b>c&&a+c>b&&b+c>a&&abs(a-b)<c&&abs(a-c)<b&&abs(b-c)<a)
    {
        if(a==b||a==c||b==c)
        {
            if((a==b&&a==c)||(a==c&&a==b)||(b==c&&a==b))
                printf("Regular triangle\n");
            if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&a!=b))
                printf("Isosceles triangle\n");
        }
        else
            printf("Normal triangle\n");
    }
    else
        printf("it is not a triangle\n");
}
int main()
{
    int a,b,c;
    printf("please input the number of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    triangle_judge(a,b,c);
    return 0;
}
