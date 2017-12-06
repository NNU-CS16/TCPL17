#include <stdio.h>
int main ()
{
    int n;
    int arr[100],right[100],left[100];
    int count = 0;
    int max,min,i;
    char ch = ' ';
    
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    for (i=0;i<n;i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        right[i] = max;
    }

    min = arr[n-1];
    for (i=n-1;i>=0;i--)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        left[i] = min;
    }

    for (i=0;i<n;i++)
    {
        if (arr[i] == right[i] && arr[i] == left[i])
        {
            count++;
        }
        else 
        {
            arr[i] = 0;
        }
    }
    printf("%d\n",count);

    for (i=0;i<n && count != 0;i++)
    {
        if (count == 1)
            ch = '\0';
            if(arr[i] != 0)
            {
                printf("%d%c",arr[i],ch);
                count--;
            }
    }
    
    printf("\n");
    return 0;
}

