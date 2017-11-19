   #include <stdio.h>
   #include <math.h>
   
  
   int is_prime( int i )
   {
      int m;
      for( m=2; m<=sqrt( i ); m++)
      {
         if( i%m==0)
           return -1;
      }
      return 0;
   }


   int main()
   {
      int m,n;
      int t=0, i=2,j=0;
     
      scanf("%d %d", &m, &n);
     
      while( t<n )
      {
         if( is_prime( i )==0 ) 
         {
            t++;
            if( t>=m )
            {
               j++;
               if( j%10==0 )
                 printf("%d\n",i);
               else if(j==n-m+1)
                 printf("%d\n", i);
	       else 
		 printf("%d ",i);
	    }
         }

         i++;
      }
       
      return 0;
   }
