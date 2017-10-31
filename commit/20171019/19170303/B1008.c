#include <stdio.h>
#include <stdlib.h>
#define swap(a,b) a^=b,b^=a,a^=b
void zh(int *arr,int N,int M)
{
       int i,j;
      if(M > 0 && M <N){
       for (i = 0,j = N-1;i < j; i++,j--)//全部倒序
        swap(arr[i],arr[j]);
     for (i = 0,j = M-1;i < j; i++,j--)//前M个数倒序
        swap(arr[i],arr[j]);
     for (i = M,j = N-1;i < j; i++,j--)//后N-M个数倒序
        swap(arr[i],arr[j]);
                                              }
}
int main()
{
    int number[100],M,N;  
    int i;
    scanf("%d%d",&N,&M);
     for (i = 0;i < N ;i++)     
    scanf("%d",&number[i]);
     M %=N;
     zh(number,N,M);
    for(i = 0 ;i < N - 1;i++)
     printf("%d ",number[i]);
    printf("%d\n",number[N-1]);
     return 0;
}
