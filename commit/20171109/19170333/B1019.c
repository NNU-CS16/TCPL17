#include <stdio.h>
#include <stdlib.h>
void judge (int n)
{
    int i, min, sum, max = 0;
    int p, j;
    int arr[4];
    do
    {    
        for (i = 0; i < 4; i++)
        {
            p = n % 10;
            arr[i] = p;
            n = (n-p) / 10;
        }        
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4-i; j++)        
                if (arr[j] <= arr[j+1])
                {
                    max = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = max;
                }
        }
        max = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
        min = arr[3] * 1000 + arr[2] * 100 + arr[1] * 10 + arr[0];
        printf ("%04d-%04d = %04d\n", max, min , max - min);
        n = max - min;
    }
    while (n != 0 && n != 6174);
}    
int main ()
{
    int N;
    scanf ("%d", &N);
    judge (N);
    return 0;
}

