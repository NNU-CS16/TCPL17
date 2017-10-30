#include<stdio.h>
int main()
{
int n,i,max=0,min=0;
scanf("%d",&n);

char x[n][10],y[n][10];
int a[n];
for(i=0;i<n;i++)
{
scanf("%s",x[i]);
scanf("%s",y[i]);
scanf("%d",&a[i]);

if(a[i]<a[min])
min=i;
if(a[i]>a[max])
max=i;
}
printf("%s %s\n",x[max],y[max]);
printf("%s %s\n",x[min],y[min]);
return 0;
}
