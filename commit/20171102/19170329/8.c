   #include <stdio.h>

   int LCM( int m,int n )
   {
      int r=m%n, i;
      int s=m*n;
      while(r!=0)
      {
          m=n;
          n=r;
          r=m%n;
      }
      i=s/n;
      return i;
   }

   int main()
   {
      int m,n;
      int max,min;
 
      scanf("%d%d",&m,&n);
      
      max=m>n?m:n;
      min=n<m?n:m;
      m=max; n=min;
 
      printf("%d\n",LCM( m, n ) );
      return 0;
   }     
