#include <stdio.h>
int is_sorted(int arr[], int left, int right)
{
    int i,j,a,b,n,z;
    for(i = 0;i < n;i++)
    {
        if(arr[i] == left)
            a = i;
        else
            continue;
    }
    for(j = 0;j < n;j++)
	{
		if(arr[j] == right)
			b = j;
		else
			continue;	
	}
    for(j = a;j < b;j++)
    {
        if(arr[j] > arr[j + 1])
        {
            z = 0;
            break;
        }
        else
            z = 1;
    }
    return z;
}

int main()
{
    int i, n, z, left, right;
    printf("n=");
    scanf("%d",&n);
    int arr[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("left=");
    scanf("%d",&left);
    printf("right=");
    scanf("%d",&right);
    z = is_sorted( arr, left, right);
    if(z == 0)
        printf("无序");
    else
        printf("有序");
    printf("\n");
    return 0;
}

