#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int i,n,total=0;//定义整型数
    float pj,fc=0;
    int a[100000];
    struct haha
    {
       int data;
       int sub;
    }max,min;
 
    max.data=0;//最大值
    min.data=100000;//最小值
    scanf("%d",&n);
    
    srand(time(NULL));

    for (i=0;i<n;i++) //for循环，首先i=0，当i<n时，i=i+1
    { 
      
      a[i]=rand()%n+1;
      if (a[i]>max.data) { max.data=a[i]; max.sub=i; }
      if (a[i]<min.data) { min.data=a[i]; min.sub=i; }
      total+=a[i];
    }
    
    pj=((float)total)/n;
    for (i=0;i<n;i++) fc+=(a[i]-pj)*(a[i]-pj);
    fc/=n;
   
    printf("%d %d\n",max.data,max.sub);
    printf("%d %d\n",min.data,min.sub);
    printf("%d\n",total);
    printf("%f\n",pj);
    printf("%f\n",fc);
    printf("%f\n",sqrt(fc));

    return 0;

}
