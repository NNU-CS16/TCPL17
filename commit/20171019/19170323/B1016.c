#include <stdio.h>
int main()
{
  int N,t=7,a=3;
  char c;
  int b,i,j,k;
  scanf("%d %c",&N,&c);
  int m=t+2*(a+2);
 do{
    if(N>=t)
    {
     if(N<=m)
       {break;}
     else if(N==m)
      {t=m;
       a=a+2;
       break;}
     else
     {t=m;
      a=a+2;}
    }
   }while(N>t&&N<=m);
   
  
    
    for(b=(a+1)/2,i=1;i<(a+1)/2;i++,b--)
     {
       for(j=0;j<=i;j++)
         printf(" ");
       for(k=1;k<=2*b-1;k++)
         printf("%c",c);
          printf("\n");
     } 
   
   for (i=(a+1)/2;i<=(a+1)/2;i++)
       {
         for(j=0;j<=i;j++)
           printf(" ");
         printf("%c",c);
         printf("\n");
       }
     
      for (b=2,i=(a+1)/2;i<=a-1;i++,b++)
        {
           for(j=0;j<=a-i;j++)
           printf(" ");
           for(k=1;k<=2*b-1;k++)
            printf("%c",c);
            printf("\n");
        }
         
  printf("%d\n",N-t);
  return 0;
}
  
