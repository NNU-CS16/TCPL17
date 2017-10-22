#include<stdio.h>
void b(int n)
{
          int m;
          if (n!=0)    
          {  m=n%2;
             b(n>>1); 
             printf("%d",m);              
          }
}
              
int main()
{
    int n,m,a;
    scanf("%d",&n);
   
    if (n>0)
    {
       b(n);
    }
    else
    {
       printf("%d",n);        
    }
    printf("\n");
    printf("%o\n",n);
    printf("%x\n",n);
 
    return 0;
}

