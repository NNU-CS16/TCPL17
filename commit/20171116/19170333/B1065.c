#include <stdio.h>
struct ID {
    int nan;
    int nv;
};
int main ()
{
    int i, n, m, j;
    int count = 0, temp, p;
    scanf ("%d", &n);
    struct ID name[n];
    for (i = 0; i < n; i++)
        scanf ("%d %d", &name[i].nan, &name[i].nv);
    scanf ("%d", &m);
    int arr[m];
    for (i = 0; i < m; i++)
        scanf ("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (name[i].nan == arr[j] )
            {
                for (p = 0; p < m; p++)
                    if (name[i].nv == arr[p])
                    {
                        arr[p] = -1;
                        arr[j] = -1;
                    }
                continue;
            }
            continue;
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = i+1; j < m; j++)
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }
    for (i = 0; i < m; i++)
    {
        if (arr[i] != -1)
            count++;
    }
    printf ("%d\n", count);
    for (i = 0; i < m; i++)
        if (arr[i] != -1)
            printf ("%-6d", arr[i]);
    printf ("%c\n", 8);

    return 0;
}
