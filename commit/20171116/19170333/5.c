#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void SelectionSort (int arr[], int left, int right)
{
    int aim, i, j, temp, p;
    for (i = left - 1 ; i < right; i++)
    {
        aim = i;
        for (j = i; j < right; j++)
        {        
            if (arr[aim] > arr[j])
                aim = j;
        }
        if (aim != i)
        {
            temp = arr[aim];
            arr[aim] = arr[i];
            arr[i] = temp;    
        }
    }
    for (i = left - 1; i < right; i++)
    printf ("%d\n", arr[i]);
}
int main ()
{
    srand ((unsigned int) time (NULL));
    int i;
    int n, m;
    int arr[50];
    scanf ("%d%d", &n, &m);
    for (i = 0; i < 50; i++)
        arr[i] = rand() % 50 + 1;
    SelectionSort (arr, n, m);
    return 0;
}

