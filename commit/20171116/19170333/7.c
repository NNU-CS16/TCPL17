#include <stdio.h>
#include <string.h>
#define M 1000
int main ()
{
    char A[M] = {0}, B[M] = {0};
    int arr[M] = {0};
    scanf ("%s", A);
    scanf ("%s", B);
    int i, len1, len2, j;
    len1 = strlen (A);
    len2 = strlen (B);
    if (len1 <= len2)
    {
        for (i = 0; i < len1; i++)
        {
            if ((A[i] + B[len2-1-i] - 96) > 9)
            {
                arr[len2-i-2] = 1;
                arr[len2-i-1] = arr[len2-i-1] + A[len1-1-i] + B[len2-i-1] - 106;
            }
            else
                arr[len2-i-1] = arr[len2-i-1] + A[len1-1-i] + B[len2-i-1] - 96;
            
        }
        if (len1 < len2)
            for (i = 0; i < len2-len1; i++)
                arr[i] = B[i] - 48 + arr[i];
        for (i = 0; i < len2; i++)
            printf ("%d", arr[i]);
    }
    else if (len1 > len2)
    {
        for (i = 0; i < len2; i++)
        {
            if ((A[len1-i-1] + B[i] - 96) > 9)
            {
                arr[len1-i-2] = 1;
                arr[len1-i-1] = arr[len1-i-1] + A[len1-i-1] + B[len2-i-1] - 106;
            }
            else
                arr[len1-i-1] = arr[len1-i-1] + A[len1-i-1] + B[len2-i-1] - 96;
        }
        for (i = 0; i < len1-len2; i++)
            arr[i] = A[i] - 48 + arr[i];
        for (i = 0; i < len1; i++)
            printf ("%d", arr[i]);
    }
    printf ("\n");
    return 0;
}
