#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int MAX(int arr[],int t,int i,int max,int N) //把数组的第一个数赋值给max，此时对应的下标为t
{
    max=arr[0];
    for(t=0,i=0;i<N;i++)         //从数组的第二个数开始判断，max是否是最大值 
    {
       if(max<arr[i])
       {                        //不是最大值，就把该值赋值给max，并修改下标 
         max=arr[i];
         t=i;
       }
    }
    printf("最大值%d\t下标%d\n", max,t);
}

int MIN(int arr[],int s,int i,int min,int N)
{
    min=arr[0];
    for(s=0,i=0;i<N;i++)
    {
       if(min>arr[i])
       {                        
         min=arr[i];
         s=i;
       }
    }
    printf("最小值%d\t下标%d\n",min,s);
}


int main()
{
    int i,N,arr[N],m,E,t,s,max,min;
    float sum,ave,var,std;

    printf("请输入N\n");
    scanf("%d",&N);
    printf("随机数");
    srand(time(NULL));
    for(i=0,sum=0,ave=0,E=0,var=0,std=0;i<N;i++)
    {
       m=rand()%N+1;
       arr[i]=m;
       sum=sum+m;
       ave=sum/N;
       E=E+m*m;
       var=E-ave*ave;
       std=sqrt(var);
       printf("%d",m);
    }
    printf("\n");
    MAX(arr,t,i,max,N);
    MIN(arr,s,i,min,N);
    printf("和%.0f\t平均数%.3f\t方差%.3f\t标准差%.3f\n",sum,ave,var,std);

    return 0;
}

