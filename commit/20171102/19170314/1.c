#include<stdio.h>
void triangle_judge(int a,int b,int c)
{
    
    
    if(a + b < c|| a + c < b|| b + c < a)
    {
        printf("not a triangle");
    }
    else if(a==b&&b==c)
    {
         printf("it is a regular triangle");
    } 
    else if(a==b||a==c||b==c)
    { 
         printf("it is a isosceles triangle");
    }
    else 
    {
         printf("it is a formal triangle");
    }
}
int main()
{
    int i;int j;int k;
    scanf("%d%d%d",&i,&j,&k);
    triangle_judge(i,j,k);
    return 0;
} 

