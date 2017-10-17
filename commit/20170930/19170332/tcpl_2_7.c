   #include<stdio.h>
     
      unsigned int invert(unsigned int x, int p, int n)

   {
     
     return x^(~(~0<<n) << (p-n+1));
   }

     int main()
   
   {
     unsigned int x;
     unsigned int y;
     int p;
     int n;

     printf("please enter the number of x,p,n.\n");
     scanf("%u%d%d",&x,&p,&n);
    
     y=invert(x,p,n);
    
     printf("%u\n",y);
  
    return 0;

  }

