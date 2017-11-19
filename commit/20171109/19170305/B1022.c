#include<stdio.h>
int main()
{
int A,B,C,D;
int a[1000];
int i,j;
scanf("%d %d %d",&A,&B,&D);
C=A+B;
for(i=0,j=0;i<1000;i++,j++)
{
a[i]=C%D;
C=(C-C%D)/D;
if(C==0)
break;
}
for(i=j;i>=0;i--)
printf("%d",a[i]);
printf("\n");
return 0;
}
