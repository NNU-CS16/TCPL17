#include <stdio.h>
void Bubblesort(int *arr,int N)
{
    int i,j,m;
    for(i=0;i<N-1;i++)
    for(j=0;j<N-1-i;j++)
    if (arr[j]>arr[j+1])
    {
        m=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=m;
    }
}
int main()
{
    int N,p,a[100000],i,j,num=1;
    scanf("%d%d",&N,&p);  
    for (i=0;i<N;i++)
    scanf("%d",&a[i]);
    Bubblesort(a,N);
    for (i=0;i<N;i++)
    for (j=i+num;j<N;j++)
    {
        if (a[j]<=a[i]*p)
        {
            if (j-i+1>num)
            num=j-i+1;
        }
        else 
        break;
    }
    printf("%d\n",num);
    return 0;
}
