   #include <stdio.h>

   unsigned setbits (unsigned x, int p, int n, unsigned y)
 
   {

            return x & ~(~(~0 <<n) <<(p+1-n)) |(y & ~(~0 << n)) << (p+1-n);
  
   }

   int main ()
   
   {

       unsigned x =25,y =33;
       int p =2,n =5,k;

       k =setbits(x,p,n,y);
       printf("%d\n",k);

       return  0;

    }


 
