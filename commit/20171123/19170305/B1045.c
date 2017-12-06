#include<stdio.h>
int main()
{
int N,i,num=0,l,r;
scanf("%d",&N);
int a[N],b[N];
for(i=0;i<N;i++)
scanf("%d",a+i);
for(i=0;i<N;i++)
{
for(l=0;l<=i;l++)
{if(a[l]>a[i])break;}
for(r=N-1;r>=i;r--)
{if(a[r]<a[i])break;}
if(l==i+1&&r==i-1)
{
b[num]=a[i];
num++;
}
}
printf("%d\n",num);
for(i=0;i<num;i++)
printf("%d ",b[i]);
printf("\n");
return 0;
}
