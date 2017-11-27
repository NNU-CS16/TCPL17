#include<stdio.h>
void InsertionSort(int arr[], int left, int right)
{
    int i,j,tmp;
    for (i=left; i<right; i++)
    {
        tmp=arr[i];
        for (j = i-1; j>=0 && arr[j] >tmp; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = tmp;
    }
    for (i=left; i<right; i++)
    printf("%d",arr[i]);
}

int main()
{
    printf("请输入十个数;\n");
    printf("请输入[a,b]~[1,10];\n");
    int str[10], i, a, b;
    for(i=0; i<10; i++)
        scanf("%d", &str[i]);
    scanf("%d %d",&a, &b);
    InsertionSort(str, a, b);
    return 0;
}
