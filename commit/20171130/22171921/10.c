#include <stdio.h>
#define Size 1000001

int A[Size], T[Size], cnt = 0;

void Merge_Sort(int x, int y)
{       
    if (y - x > 1)
    {
        int m = x + (y - x) / 2, p, q, i;    
        p = x,q = m,i = x;    
        Merge_Sort(x, m);
        Merge_Sort(m, y);
        while (p < m || q < y)
        {
            if (q >= y || (p < m && A[p] <= A[q])) 
                T[i++] = A[p++];   
                else 
                    T[i++] = A[q++],cnt += m - p; 
        }
        for (i = x;i < y;i++) 
            A[i] = T[i];
    } 
}

int main()
{
    int n, i;
    scanf("%d", &n);
    for(i = 0;i < n;i++) 
        scanf("%d", &A[i]);
        Merge_Sort(0, n);
        printf("%d\n", cnt); 
    return 0; 
}
