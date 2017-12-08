/*12_B1030.c_完美数列*/
#include<stdio.h>  
#include<stdlib.h>  

int cmp(void const *x,void const *y)  
{  
    return *((double *)x)-*((double *)y);  
}  
int main()  
{  
    int n, i, j, result;  
    double p, *a;  
    while (~scanf("%d%lf", &n, &p))  
    {  
        a = (double *)malloc(n*sizeof(double));  
        for (i = 0; i < n; i++)  
            scanf("%lf", &a[i]);  
        qsort(a, n, sizeof(double), cmp);  
        j = 0;  
        result = 1;  
        for (i = 1; i < n; i++)  
        {  
            if (a[j] * p < a[i])  
            {  
                if (i - j > result)
					result = i - j;  
                j++;  
            }  
        }  
        if(a[j] * p >= a[n - 1] && n - j > result)
			result = n - j;  
        printf("%d\n", result);  
    }  
    return 0;  
}  
