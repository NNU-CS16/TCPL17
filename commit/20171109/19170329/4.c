   #include <stdio.h>
   int go( int n, int k );
   

   int main()
   {
      int n,k;
      scanf("%d %d",&n,&k);
      printf("%d\n",go( n, k ) );
      return 0;
   }


  int go( int n, int k )
  {
     if(n==0)  return 1;
     else 
     {
         int s=0, i;
         if(k>=n)
           for(i=0; i<n; i++)
               s+= go( i, k )%100007;
        
         else
           for(i=n-k; i<n; i++)
               s+= go( i, k )%100007;

         return s;
     }
  }

   
  
