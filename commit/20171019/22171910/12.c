#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int max(int arr[],int n);
int sum(int arr[],int n);

int main()
{
  int n,i,arr[i];
  printf("请输入小于100000的数字N:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    srand(time(NULL));                  //产生随机数
    arr[i]=rand()%(n+1);
  }
  max(arr,n);
  sum(arr,n);
  return 0;
}

int max(int arr[],int n)               //求最大值最小值
{
  int i;
  int max=arr[0];
  int min=arr[0];
  for(i=0;i<n;i++)
   { if(max<arr[i]) max=arr[i]; }
  printf("%d %d\n",max,i);
  for(i=0;i<n;i++)
   { if(min>arr[i]) min=arr[i]; }
  printf("%d %d\n",min,i);
}

int sum(int arr[],int n)           //求和、平均数、方差、标准差
{
  int sum,ave,var,sta,i;
  sum=0;
  for(i=0;i<n;i++)
  { sum=sum+arr[i]; }
  printf("%d\n",sum);
  ave=sum/n;
  printf("%d\n",ave);
  var=0;
  for(i=0;i<n;i++)
  { var=var+(arr[i]-ave)*(arr[i]-ave);}
  var=var/n;
  sta=sqrt(var);
  printf("%d\n",var);
  printf("%d\n",sta);
}
