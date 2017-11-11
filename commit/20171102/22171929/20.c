#include <stdio.h>
void main()
{
int i,j,a[4][5],b[5][4];
for(i=0;i<4;i++)
for(j=0;j<5;j++)
{
scanf("%d",&a[i][j]);
b[j][i]=a[i][j];
}
printf("\n转置矩阵:\n");
for(i=0;i<5;i++)
for(j=0;j<4;j++)
{
printf("%-4d",b[i][j]);
if((j+1)%4==0) printf("\n");
}
}
