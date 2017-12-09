#include <stdio.h>

int main ()
{   
    int n, i, j;
    int total=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++)
        scanf("%d", arr[i]);
    for (i=0; i<n-1; i++)
        for (j=i+1; j<n; j++)
            if (arr[i] > arr[j])
                total++;
    printf("%d\n",total);
    return 0;
}
