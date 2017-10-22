#include<stdio.h>
void A(int n)
{
    if(n>2)
    {
      A(n/2);
      
    }
    printf("%d",n%2);
}
void B(int n)
{
    if(n>7)
    {
      B(n/8);
     
    }
    printf("%d",n%8);
}
void C(int n)
{
     if(n>15)
     {
       C(n/16);
    
     }
     printf("%d",n%16);
}
int main()
{
    int i;
    printf("input a num:");
    scanf("%d",&i);
    A(i);
    printf("\n");
    B(i);
    printf("\n");
    C(i);
    printf("\n");
    return 0;
}
 


   

     
  

     
