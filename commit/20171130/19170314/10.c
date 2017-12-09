#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int i,j,sum=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
             if(arr[i]>arr[j])
             sum++;
        }
     }
    printf("%d",sum);
    return 0;
}
