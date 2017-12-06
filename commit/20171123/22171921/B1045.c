#include <stdio.h>  
#include <stdlib.h>  
#define MAX 100000  

int main()  
{  
    int N;  
    scanf("%d", &N);  
    if (N == 0)  
    {  
        printf("0\n\n");  
        return 0;  
    }  
    int s[MAX] = {0};  
    int n[MAX] = {0};  
    int flag[MAX] = {0};  
    int i, j;  
    int k = 0;  
    int min, max = 0;  
    for (i = 0;i < N;i++)  
    {  
        scanf("%d", &s[i]);  
    }  
    min = s[N - 1];  
    flag[N - 1] = 1;  
    for (i = N - 2;i >= 0;i--)  
    {  
        if (min > s[i])  
        {  
            min = s[i];  
            flag[i] = 1;  
        }  
    }    
    for(i = 0;i < N;i++)  
    {  
        if (max < s[i])  
        {  
            max = s[i];  
            if (flag[i] == 1)  
            {  
                n[k] = s[i];  
                k++;  
            }  
        }  
    }  
    printf("%d\n", k);  
    if (k != 0)  
    {  
        for (i = 0;i < k - 1;i++)  
            printf("%d ", n[i]);  
            printf("%d\n", n[i]);  
    }
    else
        printf("\n");  
        return 0;  
}  
