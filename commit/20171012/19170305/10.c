#include<stdio.h>
double f(double x);

double a0,a1,a2,a3,a,b,x,r;


int main()
{
   scanf("%lf %lf %lf %lf\n",&a3,&a2,&a1,&a0);
   scanf("%lf %lf",&a,&b);
   if(b<=a)
   printf("Wrong!\n");
   else if((b-a)<1e-6)
   {
      r=(a+b)/2; 
   printf("r=.2%lf\n",r);
   }
   else
   {
      if(f(a)*f(b)>0)
      printf("Wrong!\n");
      else if(f(a)*f(b)==0)
         {
            if(f(a)==0)
               printf("r=%lf\n",a);
            else if(f(b)==0)
               printf("r=%.2lf\n",b);
            else
               printf("Wrong!");
         }  
      else
      {   
         r=(a+b)/2;
         while(b-a>=1e-6)
         {
            if(f(r)*f(a)>0)
               {
                  a=r;
                  r=(a+b)/2;
               }
            if(f(r)*f(b)>0)
               {
                  b=r;
                  r=(a+b)/2;
               }
      
         }
         printf("r=%.2lf\n",r);
      }
   }

}

double f(double x)
{
   double y;
   y=a3*x*x*x+a2*x*x+a1*x+a0;
   return y;
}
