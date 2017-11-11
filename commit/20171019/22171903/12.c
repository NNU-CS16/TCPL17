#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int arr[100000];
    int a,b,c,d,i,n,m,o;
    int max,min;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       o=rand()%n;
       arr[i]=o;
    }

    max=arr[0];
    m=0;
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
           max=arr[i];
	   m=i;
    }
    printf("最大值的数组下标为:%d\n",m);
    
    min=arr[0];
    m=0;
    for(i=0;i>n;i++)
    {
   	if(min>arr[i])
	   min=arr[i];
	   m=i;
    }
    printf("最小值的数组下标为:%d\n",m);

    a=0;
    for(i=0;i<n;i++)
    {
       a=a+arr[i];
    }
    b=a/n;
    printf("和为:%d\n",a);
    printf("平均值为:%d\n",b);
      
    c=0; 
    for(i=0;i<n;i++)
    {
       c=(c+(arr[i]-b)*(arr[i]-b))/n;
    }
    d=(int)pow(c,1/2);
    printf("方差为:%d\n",c);
    printf("标准差为:%d\n",d);

    return 0;
}
