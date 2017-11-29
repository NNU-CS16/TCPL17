#include<stdio.h>
int main()
{
int a[1000],b[1000],c[1001]={0};
int na,nb,nc=0,max;
int A,B;
int i=0,j[1000];
int l;
j[0]=0;
scanf("%d %d",&A,&B);
while(A!=0)
{
a[i]=A%10;
A=(A-A%10)/10;
i++;
}
na=i;
//for(i=0;i<na;i++)
//printf("%d",a[i]);
//printf("\n");
i=0;
while(B!=0)
{
b[i]=B%10;
B=(B-B%10)/10;
i++;
}
nb=i;
j[0]=0;
for(i=1;i<1000;i++)
{
if(a[i-1]+b[i-1]+j[i-1]>10)
{c[i]=a[i-1]+b[i-1]+j[i-1]-10;j[i]=1;}
else
{c[i]=a[i-1]+b[i-1]+j[i-1];j[i]=0;}
}
i=1000;
while(1)
{
i--;
if(c[i]!=0)
break;
}
l=i;
for(i=l;i>=1;i--)
printf("%d",c[i]);
printf("\n");
return 0;
}
