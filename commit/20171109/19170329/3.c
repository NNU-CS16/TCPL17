   #include <stdio.h>
   
   int go( int n, int a, int b )
   {
      if(n==1||n==0) 
          return b;
      return go( n-1, b%100007, (b+a)%100007);
   }

   int main()
   {
      int n;
      int a=1,b=1;
      scanf("%d",&n);
      printf("%d\n", go( n, a, b ));
      return 0;
   }

      

       

