#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
   int n,j,s=0,i,m;
   int a,f=0,b,max,min,temp;
   scanf("%d",&n);
   int arr[n];
  
   for(i=0;i<n;i++)
  {
   
    arr[i]=rand()%n+1;
  }
  max=arr[0];
  min=arr[0];
  for(i=0;i<n;i++)
  {
   if(arr[i]>max)
   { max=arr[i];
     j=i;}
   if(arr[i]<min)
   { min=arr[i];
    m=i;}
  }
  printf("最大值:%d,%d\n",max,j);

  printf("最小值:%d,%d\n",min,m);
  

   for(i=0;i<n;i++)
  {  s+=arr[i]; }
    a=s/n;
   for(i=0;i<n;i++)
  {  f=(arr[i]-a)*(arr[i]-a)+f; }
   f=f/n;
   b=sqrt(f);
  printf("和:%d\n平均值:%d\n方差:%d\n标准差:%d\n",s,a,f,b);
  return 0;
}
