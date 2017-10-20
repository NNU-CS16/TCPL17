#include<stdio.h>
int main()
{
int n,j,i,k;
scanf("%d",&n);
for(j=1;j<=n;j++)
{

for(k=n;k>j;k--)
{
     printf(" ");


}
for (i=1;i<=j*2-1;i++)
{
      printf("*");
     

}
    printf(" ");
    printf("\n");
}



for (j=1;j<=n-1;j++)
{

 for(k=1;k<=j;k++)
   {
      printf(" ");
   }
 for (i=2*n-3;i>=j*2-1;i--)
  {
     printf("*");
    
  }
    printf(" ");
   printf("\n");
}


return 0;
}
