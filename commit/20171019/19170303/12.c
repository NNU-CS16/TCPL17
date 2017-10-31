#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{ 
    int i,n,sum=0;
    float average,fc=0;
    int arr[100000];
    printf("请输入小于100000的一个正整数n:");
scanf("%d",&n);                                    
srand(time(NULL));
int max=0,min=100000,a,b;
for (i=0;i<n;i++) 
{                
    arr[i]=rand()%n+1; 
    if (arr[i]>max) 
    { max=arr[i]; a=i; }
    if (arr[i]<min)
    { min=arr[i];b=i; }
    sum+=arr[i];
}                    
average=((float)sum)/n;
for (i=0;i<n;i++) 
fc+=(arr[i]-average)*(arr[i]-average);
fc/=n;
printf("%d %d\n",max,a);
printf("%d %d\n",min,b);
printf("%d\n",sum);
printf("%f\n",average);
printf("%f\n",fc);
printf("%f\n",sqrt(fc));
return 0;
}
