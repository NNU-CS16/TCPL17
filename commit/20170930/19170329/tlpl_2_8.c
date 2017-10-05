 #include<stdio.h>    

  
 unsigned righrot(unsigned x,int n)
{
return (x& (~0<<n)^x)<<(sizeof(int)*8-n)|(x>>n);

}


 int main()  
    {  
   unsigned x=150;   
   int n=3;
   printf("%u\n",rightrot(x,n));  
   return 0;     
   }  

