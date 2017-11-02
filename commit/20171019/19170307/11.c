#include <stdio.h>
int main()
{
    int line;
    int i,j,k;
    int yh1[100]={1},yh2[100]={1};
    int *y1=yh1,*y2=yh2,*t;
    printf("Please input lines:");
    scanf("%d",&line);
    for( i=0;i<line;i++)
    {
       for(k=1;k<line-i;k++)
         printf("  ");
       for( j=0;j<i;j++)
       {
         printf("%4d",y2[j]);
         y2[j+1]=y1[j]+y1[j+1];
       }
       printf("%4d\n",y2[j]);
       t=y2;
       y2=y1;
       y1=t;
}
   return 0;
}
