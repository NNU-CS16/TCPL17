#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, m, count = 0;
    scanf("%d",&n);
    int a[100000], b[100000], c[100000];
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    for (i=0, m=0; i<n; i++)
        if(a[i] >= a[m])
            {
                b[i] = a[i];
                m = i;
            }
        else
            b[i] = a[m];
    for (i = n-1, m = i; i >= 0; i--)
        if (a[i] <= a[m])
            {
                c[i] = a[i];
                m = i;
            }
        else
            c[i] = a[m];
    for (i=0; i<n; i++)
        if(a[i] == b[i]&&a[i] == c[i])
            count ++;
        else
            a[i] = 0;
    printf("%d\n",count);
    for (i=0;i<n;i++)
    {
        if(a[i])
        {
            printf("%d ",b[i]);
            count--;
        }
        if(count==1)
		break;
    }
    for(i++;i<n;i++)
        if(a[i])printf("%d",a[i]);
    printf("\n");
    return 0;
}
