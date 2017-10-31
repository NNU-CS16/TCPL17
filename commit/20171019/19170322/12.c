#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
 int arr[100000],max,min,n,i,a,b,c=0,he=0;

  float ping,fang,biao;

   printf("please input N:");

   scanf("%d",&n);

   srand(time(NULL));

   for(i=0;i<n;i++)

 {
    int m;

    m=rand()%n;

    arr[i]=m;
 }

   max=arr[0];
   a=0;

   for(i=0;i<n;i++)
   if(max<arr[i])

 {
    max=arr[i];
    a=i;
  }

    min=arr[0];
    b=0;

  for(i=0;i<n;i++)
  if(min>arr[i])

 {
      min=arr[i];
      b=i;
 }

  for(i=0;i<n;i++)
   he=he+arr[i];

  ping=he/n;

   for(i=0;i<n;i++)

   c=c+(arr[i]-ping)*(arr[i]-ping);

   fang=c/n;

   biao=sqrt(fang);

   printf("最大值下标:%d\n最小值下标:%d\n和:%d\n平均值:%.3f\n方差:%.3f\n标准差:%.3f\n",a,b,he,ping,fang,biao);

   return 0;
}
