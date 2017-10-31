#include<stdio.h>
int main(void)
{

    int x,y,N;
    scanf("%d",&N);
    int flag=0;
    for(x=0;x<=100;x++)
       {
       for(y=x;y<=100;y++)
          {
          if(x*x+y*y==N){
          flag=1; 
          printf("%d ",x);
           
          }
       }
       }  
       if(flag==0)
       printf("no solution");
       return 0;
}



              



