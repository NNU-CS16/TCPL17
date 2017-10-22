#include<stdio.h>
int main()
{
int n;
printf("line(odd)= ");
scanf("%d",&n);
int i,j,k;
for(i=0;i<n;++i)
{
k=n/2-i;
for(j=0;j<n;++j)
{
if(k>=0)
{
if(j<k||j>n/2+i)
printf("a");
else
{
if((i+j)%2!=0)
printf("*");
else
printf("c");
}
}
else
if(k<0)
{
if((j<-k)||(j>n-1+k))
printf("A");
else
{
if((i+j)%2!=0)
printf
("*");
else
printf("c");
}
}
}
printf("\n");
}
return 0;
}
