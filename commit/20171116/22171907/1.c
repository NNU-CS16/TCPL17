 #include <stdio.h>

 int is_sorted(int arr[], int left, int right)
{
    int flag = 0, i;
    for (i = left; i < right; i++)
    {
        if ( arr[i] <= arr[i+1])
            continue;
        else flag = 1;
    }
        return flag;
}

 int main()
{
    int str[20];
    int a, b, m;
	scanf("%d",&str[20]);
    scanf("%d %d", &a, &b);
    m = is_sorted(str, a, b);
    if (m == 0)
        printf("IS\n");
    else
        printf("NOT\n");
    return 0;
}
