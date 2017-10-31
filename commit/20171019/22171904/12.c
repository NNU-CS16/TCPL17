#include<stdio.h>
#define N 5
int main()
{
int a[N],i,max,t;
for(i=0;i<N;i++)
scanf("%d",&a[i]);
max=a[0];
t=0;
for(i=1;i<N;i++)
if(max<a[i]){
max=a[i];
t=i;
}
printf("最大值:%d 其下标:%d",max,t);
return 0;
}
