#include<stdio.h>
void triangle_judge(int a,int b,int c);
int main()
{
int a,b,c;
printf("Please enter the three sides of the triangle");
scanf("%d,%d,%d",&a,&b,&c);
triangle_judge(a,b,c);
return 0;
} 

void triangle_judge(int a,int b,int c)


{
if(a+b>c&&a+c>b&&b+c>a)
{  
  if(a==b||b==c||a==c)
  printf("The triangle is an isosceles triangle"); 
  else
  {
   if(a==b&&a==c)
   printf("The triangle is an equilateral triangle"); 
   else
   {


    if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
    printf("The triangle is a right angle triangle");

    else
    printf("The triangle is an ordinary triangle"); 
   }
  }
}
else
printf("wrong number");

}




 


   










