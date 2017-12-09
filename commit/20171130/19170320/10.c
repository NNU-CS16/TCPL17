#include <stdio.h>
int main()
{
    int n;
    printf("請輸入數組的張讀爲");
    scanf("%d",&n);
    int arr[n];
    int i,j,flag;
    for (i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (arr[i]>arr[j])
                flag++;
        }
    }
    printf("%d\n",flag);

    return 0;
}
