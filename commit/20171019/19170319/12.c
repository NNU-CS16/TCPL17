#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
 int arr[100000];
 int n,i,aver,f,sum=0;
 int max=0,maxnu,min=0,minnu;
 int x=0;
 float b;
 scanf("%d",&n);
 for(i=0;i<=n-1;++i)
 {
   arr[i]=1+rand()%100;
   sum+=arr[i];
 }
 aver=sum/n;
 for(i=0;i<=n-1;++i)
 {
   if(arr[i]>=max)
    {
     max=arr[i];
     maxnu=i;
    }
   if(arr[i]<min)
    {
     min=arr[i];
     minnu=i;
    }
 }
 for(i=0;i<=n-1;++i)
 { 
   x+=(arr[i]-aver)*(arr[i]-aver);
 }
 f=x/n;
 b=sqrt(f);
 printf("最大值为%d,下标为%d\n",max,maxnu);
 printf("最小值为%d,下标为%d\n",min,minnu);
 printf("平均数为%d,和为%d,方差为%d,标准差为%f",aver,sum,f,b);
 return 0;
}
