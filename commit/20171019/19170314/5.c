#include<stdio.h>
int main()
{
    char c[100];
    scanf("%c",&c);
     
    int n,i;
    n=0;
    for(i=0;c[i]!='.';i++)
    {
      if(c[i]==' ')
      {
        printf("%d",n);
        n=0; 
      }
      else
       n++;
    } 
    printf("%d",n);







    
    return 0;
} 
    
     













