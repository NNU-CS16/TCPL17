#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int max(int arr[100000])
{int max,min,row,col,i,N;
max=arr[0];
for(i=0;i<N;i++)
if(max<arr[i])
{max=arr[i];
row=i;}
printf("%d%d",max,row);
min=arr[0];
for(i=0;i<N;i++)
if(min>arr[i])
{min=arr[i];
col=i;}
printf("%d%d",min,col);
}


int main( )
{
   int N,i,r,arr[100000],sum;
float ave,var,std;
scanf("%d",&N);
for(i=0;i<N;i++)
{
   sum=0;
   srand(time(NULL));
   r=rand()%N;
   sum=sum+r;
}
   printf("%d",sum);
   ave=sum/N;
   printf("%f",ave);
   for(i=0;i<N;i++)
   {
   var=0;
   srand(time(NULL));
   r=rand()%N;
   var=var+1/N*(r-ave)*(r-ave);}
   printf("%f",var);
   std=sqrt(var);
    printf("%f",std);
max(arr);
   return 0;}





