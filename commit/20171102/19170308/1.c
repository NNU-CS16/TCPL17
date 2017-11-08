#include <stdio.h>

void triangle_judge(int a,int b,int c)
{

    if (a+b<=c || b+c<=a || a+c<=b) printf("Not a triangle\n");
    else 
    {
       if (a==b && b==c) printf("Is equilateral triangle\n");
       else if (a==b || b==c || a==c) printf("Is isosceles triangle\n");
       else printf("Is normal triangle\n");
    }

}

int main()
{
 
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c); 

    triangle_judge(a,b,c);

    return 0;

}
