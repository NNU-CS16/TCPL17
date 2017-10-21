#include<stdio.h>
int main()
{
  int i,j,k,n;
  printf("Input the number of n:");
  scanf("%d",&n);

  for(i=1;i<=2*n-1;i++)
  {
   if(i<=n) 
    {
      for(j=1;j<=n-i;j++)
        { printf(" ");}
      for(k=1;k<=2*i-1;k++)
        { printf("*");}
         printf("\n");
     }
  
   else
    { 
      for(j=n;j<i;j++)
       {printf(" ");}
      for(k=0;k<2*(2*n-i)-1;k++)
       {printf("*");}
       printf("\n");
    


     }
       
  }
        return 0;


    

}
