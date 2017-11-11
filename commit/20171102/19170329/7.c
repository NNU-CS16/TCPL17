  #include <stdio.h>
  int GCD_recursive(int m, int n);
  int GCD_iterative(int m, int n);

  int main()
  {
    
     int m,n;
     int max,min;
     
     scanf("%d%d",&m,&n);
 
     max=m>n?m:n;
     min=n<m?n:m;
     m=max; n=min;
     
     printf( "%d %d\n",GCD_recursive( m,n ),GCD_iterative( m,n ) );
     return 0;
  }

  int GCD_recursive(int m, int n)
  {
     return m%n==0 ? n : GCD_recursive( n,m%n );
  }
  
  int GCD_iterative(int m, int n)
  {
     int r=m%n;
     while( r!=0 )
        {
            m=n;
            n=r;
            r=m%n;
        }
     return n;
  }
  
  
  
