i#include <stdio.h>
void MergeSort(int arr[], int left, int right);
int main()
{
    int arr[10];
    int left, right, i;
    printf("请输入数组（10）:\n");
    for(i = 0; i < 10; i++)
        scanf("%d" ,&arr[i]);
    printf("请输入排序区间:\n");
    scanf("%d%d" ,&left, &right);
    MergeSort(arr, left, right);
    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);
        printf("\n");
    return 0;
}
void Merge(int sourceArr[],int tempArr[], int startIndex, int midIndex, int endIndex)
{
    int i = startIndex, j = midIndex + 1, k = startIndex;
    while(i != midIndex + 1 && j != endIndex + 1)
    {
        if(sourceArr[i] > sourceArr[j])
            tempArr[k++] = sourceArr[j++];
        else
            tempArr[k++] = sourceArr[i++];
    }
    while(i != midIndex+1)
        tempArr[k++] = sourceArr[i++];
    while(j != endIndex+1)
        tempArr[k++] = sourceArr[j++];
    for(i=startIndex; i<=endIndex; i++)
        sourceArr[i] = tempArr[i];
}
void MergeSort(int arr[], int left, int right)
{
    int midIndex;
    int tempArr[right];
    if(left < right)
    {

        midIndex = (left + right) / 2;
        MergeSort(arr, left, midIndex);
        MergeSort(arr, midIndex + 1, right);
        Merge(arr, tempArr, left, midIndex, right);
    }
}
