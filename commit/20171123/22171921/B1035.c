#include <stdio.h>  
#include <stdlib.h>  
  
void MergeSort(int b[],int end,int c[],int a[])  
{  
    int i, L0, L1, R0, R1, next, j;  
    for (i = 1;i < end;i = i * 2)  
    {  
        for (L0 = 0;L0 < end - i;L0 = R1)  
        {  
            R0 = L0 + i;  
            L1 = R0;  
            R1 = L1 + i;  
            if (R1 > end)  
            {  
                R1 = end;  
            }  
            next = 0;  
            while (L0 < L1 && R0< R1)  
            {  
                if (b[L0] < b[R0])  
                {  
                    a[next++] = b[L0++];  
                }  
                else  
                {  
                    a[next++] = b[R0++];  
                }  
            }  
            while (L0 < L1)  
            {  
                b[--R0] = b[--L1];  
            }  
            while (next > 0)  
            {  
                b[--R0] = a[--next];  
            }  
        }  
        for (j = 0;j < end;j++)  
        {  
            if (b[j] != c[j])  
            {  
                break;  
            }  
        }  
        if (j >= end)  
        {  
            puts("Merge Sort");  
            i = i * 2;  
            for (L0 = 0;L0 < end - i;L0 = R1)  
            {  
                R0 = L0 + i;  
                L1 = R0;  
                R1 = L1 + i;  
                if (R1 > end)  
                {  
                    R1 = end;  
                }  
                next = 0;  
                while (L0 < L1 && R0 < R1)  
                {  
                    if (b[L0] < b[R0])  
                    {  
                        a[next++] = b[L0++];  
                    }  
                    else  
                    {  
                        a[next++] = b[R0++];  
                    }  
                }  
                while (L0 < L1)  
                {  
                    b[--R0] = b[--L1];  
                }  
                while (next > 0)  
                {  
                    b[--R0] = a[--next];  
                }  
            }  
            for (j = 0;j < end - 1;j++)  
            {  
                printf("%d ", b[j]);  
            }  
            printf("%d", b[j]);  
        }  
    }  
}  
  
void InsertSort(int a[],int end,int c[])  
{  
    int i = 0, temp, j, k;  
    for (i = 1;i < end;i++)  
    {  
        temp = a[i];  
        for (j = i;j > 0;j--)  
        {  
            if (a[j - 1] > temp)  
            {  
                a[j] = a[j - 1];  
            }  
            else  
            {  
                break;  
            }  
        }  
        a[j] = temp;  
        for (k = 0;k < end;k++)  
        {  
            if(a[k] != c[k])  
            {  
                break;  
            }  
        }  
        if (k >= end)  
        {  
            puts("Insertion Sort");  
            i++;  
            temp = a[i];  
            for (j = i - 1;j >= 0;j--)  
            {  
                if (a[j] > temp)  
                {  
                    a[j + 1] = a[j];  
                }  
                else  
                {  
                    break;  
                }  
            }  
            a[j + 1] = temp;  
            for (k = 0;k < end - 1;k++)  
            {  
                printf("%d ", a[k]);  
            }  
            printf("%d", a[k]);  
            return;  
        }  
    } 
}  
  
int main()  
{  
    int a[110], b[110];  
    int c[110];  
    int i, N;  
    scanf("%d", &N);  
    for (i = 0;i < N;i++)  
    {  
        scanf("%d",&a[i]);  
        b[i] = a[i];  
    }  
    for(i = 0;i < N;i++)  
    {  
        scanf("%d", &c[i]);  
    }  
    InsertSort(a, N, c);  
    MergeSort(b, N, c, a); 
    printf("\n"); 
    return 0;  
}  
