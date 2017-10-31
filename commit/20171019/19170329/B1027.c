#include<stdio.h>

int main()
{
     int N,i,j;
     int line=1,x=1;
     char c;

     scanf("%d %c",&N,&c);
     printf("\n");

     if(N<1000)
     {
        while(x<=N)
        {
           x=x+4*line+2;
           line++;
        }
        
        line --;
        x=x-4*line-2;   

        for( j=0;j<line;j++)
        {

           for( i=0;i<j;i++)
              printf(" ");
           for(i=0;i<(2*(line-j)-1);i++)
              printf("%c",c);

           printf("\n");
         }


         for(j=1;j<line;j++)
         {
            for(i=1;i<(line-j);i++)
               printf(" ");
            for(i=0;i<2*j+1;i++)
               printf("%c",c);
            
             
            printf("\n");
         }
            printf("%d\n",N-x);
     }  
}         
