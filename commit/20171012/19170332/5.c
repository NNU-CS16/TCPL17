   #include<stdio.h>
   int main()
   {
       int i,j;
       for(i=1;i<=9;i++)
        {
        printf("\n");
       
        for(j=1;j<=9;j++)
          {
             printf("%d*%d=%-3d",i,j,i*j);
          }
        printf("\n");
        }
      
       return 0;
   }

