#include<stdio.h>

int N, K;  
int arr[1001];  
int main()
{  
    scanf("%d%d", &N, &K);  
    arr[0] = 1;  
    for(int i = 1; i <= N; i++)
    {  
        for(int j = 1; j <= K && j <=i; j++)
        {  
            arr[i] = (arr[i] + arr[i-j])%100007;  
        }  
    }  
    printf("%d\n", arr[N]);  
    return 0;
}  
