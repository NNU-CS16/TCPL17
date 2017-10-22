   #include<stdio.h>
   int main()
   
   {
      int n,sum=0;
      for(n=1;n<=97;n+=4)
         sum=sum+n*(n+1)*(n+2);
      printf("sum=%d\n",sum);

     return 0;
  
   }

