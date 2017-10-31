#include <stdio.h>
int main()
{
int a[8][8], i, j, k;
for(i=0;i<8;i++)
  {
   a[i][0]=1;
   a[i][i]=1;
  }
for(i=2;i<8;i++)
   for(j=1;j<i;j++)
    a[i][j]=a[i-1][j-1]+a[i-1][j];

for(i=0;i<8;i++)
  { 
    for(k=0;k<=21-2*i;k++)
      printf(" ");
    for(j=0;j<=i;j++)
     {
      printf("%5d",a[i][j]);
     }
    printf("\n");
  }
printf("\n");
return 0;
}
