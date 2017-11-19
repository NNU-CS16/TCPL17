  #include <stdio.h>
  #include <math.h>

  int is_prime( int n )
  {
     int m;
     for( m=2; m<=sqrt( n ) ; m++ )
     {
        if(n%m==0)
            return -1;
        
     }
     return 0;
  }
  
  int main()
  {
     int t=0,n=2;
     while( t< 1000 )
     {   
          if( is_prime( n )==0 )
            {
               t++;
               if( t>99 )
                   printf("%d\t",n);
            }
          n++;  
     } 
     return 0;
  }
            
