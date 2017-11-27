#include<stdio.h>
int is_sorted(int arr[], int left, int right)
{
    int flag=0, i;
    for (i = left; i<right; i++)
    {
        if(arr[i] <= arr[i+1])
            continue;
        else flag=1;
    }
        return flag;
}

int main()
{
    printf("Please input ten numbers and [a,b]~[0,10]:");
    int str[10],i;
    for (i=0; i<10; i++)
        scanf("%d", &str[i]);
    int a, b, c;
    scanf("%d %d",&a, &b);
    c = is_sorted(str, a, b);
    if (c == 0)
        printf("Can\n");
    else
        printf("Can't\n");
    return 0;
}
