#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
int i,N,max,row,min,col,sum;int arr[100000]={0};
float g,average,vari,stdDev;
printf("输入N=");
scanf("%d",&N);
srand(time(NULL));
for(i = 0; i < N; i++)
{
arr[i] = (rand() % N);
}
max=arr[0];row=0;
for (i=0;i<N;i++)
if(max<arr[i])
{
max=arr[i];
row=i;
}
printf("max:a[%d]=%d\n",row,max);
min=arr[0];col=0;
for (i=0;i<N;i++)
if(min>arr[i])
{
min=arr[i];
col=i;
}
printf("min:a[%d]=%d\n",col,min);
for (i=0;i<N;i++)
sum+=arr[i];
average=sum/N;
printf("average:%f\n",average);
g+=(average)*(average);
average/=N;g/=N;
vari=g-(average)*(average);
stdDev=sqrt(vari);
printf("sum:%d\n variance:%f\n standard deviation:%f\n",sum,vari,stdDev);
return 0;
}
