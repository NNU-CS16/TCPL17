  #include <stdio.h>
  int is_pow2( int );

  int main()
  {
     int n;
     scanf("%d",&n);
     printf("%d",is_pow2( n ));
     return 0;
  }

  int is_pow2( int n )
  {
     if((n&(n-1))==0) return 0;
     else return -1;
  }
  
