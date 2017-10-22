#include<stdio.h>
int main()
{

    int i,j,m,n=0; 

    for(i=1;i<=9;i++)
       for(j=1;j<=9;j++,n++)
          {  
            m=i*j;
            if(n&&n%9==0)
                 printf("\n");
            printf("%d*%d==%d ",i,j,m);
          }
     printf(" "); 
 
     return 0;
}

             



    
