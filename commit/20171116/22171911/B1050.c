#include <stdio.h>
#include <stdlib.h>
int main( )
{
    int m, temp, i = 0;
    int n, j;
    int arr[100];
    printf ("请输入数目：");
    scanf ("%d", &m);
    printf ("请输入数组：");
    for (int i = 0; i < m; i++)
    {
	scanf ("%d", &arr[i]);
    }
    if (arr[i] > arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
               
    int a[10][10];
    for (n = 0; n <= m/2; n++)
    {
        for (j = n; j <= m - n - 1; j++)
            a[n][j] = arr[i++];
        for (i = n + 1; i < m - n - 1; i++)
            a[i][m-n-1] = arr[i++];
        for (j = m - n - 1; j > n; j--)
            a[m-n-1][j] = arr[i++];
        for (i = m - n - 1; i > n; i--)
            a[i][n] = arr[i++];
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
            printf ("%2d", a[i][j]);
        printf ("\n");
    }
    return 0;
}



















    
