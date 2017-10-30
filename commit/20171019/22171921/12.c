#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>  
int main()  
{  
    int N;
    N<=100000;
    scanf("%d\n",&N);
    srand(time(NULL));
    int i,arr[N];
    for(i=0;i<N;i++)
   {
    arr[i]=rand()%N;
   }
    int m,a,b=0,min;  
    scanf("%d",&m);  
    if(m==0)  
    return 0;  
    else  
    {   
    min=arr[N];  
    for(i=1;i<m;i++)  
    { 
        if(arr[N]<min)   
        {  
        min=arr[N];  
        b=i;      
        }  
    }   
    }  
    int max,t;
    for(i=0;i<N;i++)
    max=arr[0];
    t=0;
    for(i=1;i<N;i++) 
        if(max<arr[i])
    {
            max=arr[i];
            t=i;
        } 
    int j,n,c,d;
    j=min+max;
    n=j/2;
    c=((min-n)*(min-n)+(max-n)*(max-n))/2;
    d=sqrt(c);
    printf("最大值：%d下标：%d最小值：%d下标：%d和：%d平均值：%d方差：%d标准差：%d\n",max,t,min,b,j,n,c,d);
    return 0;
}

