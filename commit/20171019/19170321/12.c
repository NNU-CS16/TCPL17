#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int N,i,x;
    scanf("%d",&N);
   int arr[100000];
  for(i=0;i<N;i++)
    arr[i]=rand()%(N+1);

   int max=arr[0];
  for(i=1;i<N;i++)
      if(arr[i]>max)
      { max=arr[i];
        x=i;}
  printf("maxarr[%d]=%d ",x,max);

   int min=arr[0];
 for(i=1;i<N;i++)
      if(arr[i]<min)
     {  min=arr[i];
        x=i;}
  printf("minarr[%d]=%d ",x,min);

    int sum=0;
    for(i=0;i<N;i++)
         sum=sum+arr[i];
    printf("sum=%d ",sum);

   float ave;
    ave=sum/N;
    printf("ave=%.1f ",ave);

   double s2=0,s=0;
     for(i=0;i<N;i++)
     s2=s2+pow((arr[i]-ave),2);
     s=sqrt(s2);
    printf("s2=%.2f,s=%.2f\n",s2,s);

    return 0;


