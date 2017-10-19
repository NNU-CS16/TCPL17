   #include <stdio.h>
   #include <cmath.h>
 
   int i=0;

   unsigned rightrot(unsigned x,int n)
  
   {

      return(x&~(~0<<n))<<(i-n) |(x>>n);

   }


   int main()
 
   {

      unsigned x=57;
      int n=3;
   
      do
      
      {

        i++;

      }

      while (pow(2,i)<=x);
      printf("%u\n",rightrot(x,n));

      return  0;

  }

