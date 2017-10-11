#include<stdio.h>

#include<math.h>

int i=0;

unsigned rightrot(unsigned x,int n)

{

   return (x & ~(~0<<n))<<(i-n) | (x>>n);

}

int main()

{

    unsigned x=36; 

    int n=2;

    do

    {
     i++;
    }

     while((2,i)<=x);

     printf("%u\n",rightrot(x,n));

     return 0;
}
