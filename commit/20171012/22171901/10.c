#include<stdio.h>
#include<math.h>
float a3,a2,a1,a0;
float a,b;
float f(float x)
{
 return a3*pow(x,3)+a2*pow(x,2)+a1*x+a0;
}

int main()
{
   float mid;
   scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
   scanf("%f%f",&a,&b);
 
   while (fabs(a-b)>1e-3)
  {
    mid=(a+b)/2;
    if (f(mid)==0)
      {
        printf("%.2lf\n",mid);
        break;
      }

     else if(f(mid)*f(a)>0)
         {
          a=mid;
         }
     else if(f(mid)*f(b)>0)
         {
          b=mid;  
         }
    }  

     printf("%.2f\n",mid);

   return 0;

}

  











