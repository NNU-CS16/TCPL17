#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<n-1; i++)
    {
    for(int j=i+1; j<n; j++)
        { 
            if(arr[i]>arr[j])
                sum++;
        }
    }
    printf("%d\n",sum);
    return 0;
}
