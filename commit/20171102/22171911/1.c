#include<stdio.h>
void triangle_judge(int a,int b,int c)
{
    if(a + b > c && a + c > b && b + c > a)
    { 
        if (a == b && b == c)
            printf ("等边三角形");
        else if (a == b && a != c)
            printf ("等腰三角形");
        else if (a == c && a != b) 
            printf ("等腰三角形");
        else if (b == c && b != a)
            printf ("等腰三角形");
        else if (a != b && a != c && b != c)
            printf ("普通三角形");
    }  
    else
        printf ("不能构成三角形");
}
int main( )
{
    int a, b, c;
    scanf ("%d%d%d",&a,&b,&c);
triangle_judge(a,b,c);
return 0;
}





