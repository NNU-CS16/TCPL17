#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Please input the number of row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=10-i;j++)
	  printf(" ");
       for(k=1;k<=2*i-1;k++)
	  printf("*");
       printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {	    
       for(j=1;j<=10-n+i;j++)
          printf(" ");
       for(k=1;k<=(2*n-1)-2*i;k++)
	  printf("*");
       printf("\n");
    }
   
    return 0;
}
