  #include <stdio.h>
  #include <string.h>
  
  int count1_in_bin( int n )
  {
     int i=0;
     while(n>0)
     {
          if((n&1)==1) 
            {
               ++i;
               n>>=1;
            }
          else n>>=1;
     }
     
     return i;
  }

  int main()
  {
     int n;
     scanf("%d",&n);
     printf("%d",count1_in_bin(n));
     return 0;
  }
