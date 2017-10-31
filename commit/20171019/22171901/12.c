#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int arr[100000];
  int min, max;
  int m,n,i;
  printf("Input the value of N(N<100000):");
  scanf("%d",&n);
 
  int x,y;
  for(i=0;i<n;i++);
  {
    m=rand()%n;
    arr[i]=m;
  }
 
   max=arr[0];
   x=0;        //random

  for(i=0;i<n;i++);
   if(max<arr[i])
    {
      max=arr[i];
      x=i;
    }

              //冒泡
  min=arr[0];
  y=0;   
   
    for(i=0;i<n;i++)
     if(min>arr[i])
       {
         min=arr[i];
         y=i;
       }
   
  float he,ping,fang,biao;
     for(i=0;i<n;i++)
     he=he+arr[i];
     ping=he/n;
   
  int z;  
     for(i=0;i<n;i++)
       z=z+(arr[i]-ping)*(arr[i]-ping);
       fang=z/n;
       biao=sqrt(fang);

     printf("max下标：%d\nmin下标：%d\n和：%d\n平均值：%f\n方差：%f\n标准差:%f\n",x,y,he,ping,fang,biao);
 
     return 0;
}    
  








    
   
