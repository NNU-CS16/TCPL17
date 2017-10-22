   #include<stdio.h>
  
      float a3,a2,a1,a0;
      float f(float x);
      {
         return  a3*x*x*x+a2*x*x+a1*x+a0;
      }
      int main()
      {      
      float a,b,c;
      scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
      scanf("%f%f",&a,&b);
      
      if(f(a)==0) c=a;
      if(f(b)==0) c=b;
      while(f(a)*f(b)<0&&b-a>=0.001);
        {
          c=(a+b)/2;
          if (f(a)*f(c)>0) a=c;
          if (f(b)*f(c)>0) b=c;
          if (f(c)==0) c=c;
        }
      printf("%.2f",c);
      return 0;
      }


         
 
      

      

     
