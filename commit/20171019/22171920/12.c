#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
  int arr[100000],max,min;
  int m,n,i,a,b,c=0;
  float sum,average,fangcha,biaozhuncha;
  printf("please input N(N<100000):");
  scanf("%d",&n);
  srand(time(NULL));
  for(i=0;i<n;i++)
  {
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
      sum=sum+arr[i];
      average=sum/n;
  for(i=0;i<n;i++)
      c=c+(arr[i]-average)*(arr[i]-average);
      fangcha=c/n;
      biaozhuncha=sqrt(fangcha);
      printf("max:%d\n min:%d\n sum:%d\n average:%.3f\n 方差:%.3f\n标准差:%.3f\n",a,b,sum,average,fangcha,biaozhuncha);
      return 0;
}
