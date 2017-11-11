  #include <stdio.h>
  #include <string.h>
  int fac(int n)
  {
      if(n==1)
       return 1;
     else
       return n*fac(n-1);
  }


  int fac_bit_count(int n)
  {
     int m,len;
     char sz[100];
    
     m=fac(n);
     sprintf(sz,"%d",m);
     len=strlen(sz);

     return len;
     
  }
  

  int main()
  {
     int n;
     scanf("%d",&n);
     printf("%d",fac_bit_count(n));
     return 0;
  }
     
