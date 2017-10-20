   #include<stdio.h>
 
   int main()
   {
       int a,b;
       scanf("%d%d",&a,&b);
  
       printf("a = %d, b = %d\n", a, b);
 
       int k;

       k=a;
       a=b;       
       b=k;
       
       printf("a =%d, b = %d\n", a,b);
 
       return 0;

   }


 
