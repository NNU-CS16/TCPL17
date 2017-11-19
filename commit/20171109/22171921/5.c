#include<stdio.h>
int a[1001],n,k;  
  
int main()  
{  
    scanf("%d", &n);  
    a[1] = 1;
    a[0] = 1;  
    for (int i = 1;i <= n + 1;i++)  
    {  
        k = 0;  
        for (int j = 1;j <= a[0];j++)  
        { 
            int m;
            m=(a[j] *= 2); 
            m += k;
            k = 0;  
            if (a[j]>=10) 
                k = a[j] / 10, a[j] %= 10;  
        }  
        if (k != 0) 
            a[++a[0]] = k;  
    }  
    if (a[1] < 2) 
        a[2]--, a[1] += 10;  
        a[1] -= 2;  
        for(int i = a[0];i >= 1;i--) 
            printf("%d", a[i]);  
            printf("\n");  
            return 0;  
}  
