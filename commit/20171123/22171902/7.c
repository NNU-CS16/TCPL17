#include <stdio.h>
#include <stdlib.h>
void Merg(int arr[], int left, int mid, int right);
void MergeSort(int arr[], int left, int right);
int main()
{
    int a[100];
    int i, m, n;
    scanf("%d%d", &m, &n);
    for (i = 1; i <= n; i++)
	scanf("%d", &a[i]);
    MergeSort(a, m, n);
    for (i = m; i <= n; i++)
    {
    printf("%d", a[i]);
	if (i == n)
	    printf("\n");
	else
	    printf(" ");
    }
    return 0;
}
void MergeSort(int arr[], int left, int right)
{
    int  mid = (left + right) / 2; 
    if (left < right) 
    {
	MergeSort(arr, left, mid); 
	MergeSort(arr, mid + 1, right); 
	Merg(arr, left, mid, right); 

}



void Merg(int arr[], int left, int mid, int right)

{
    int tem[100];
    int i = left, j = mid + 1; 
    int k = 0; 
    while (i <=  mid && j <= right)
    {
	if (arr[i] <= arr[j])
	    tem[k++] = arr[i++]; 
	else
    tem[k++] = arr[j++];

    }
    while (i <= mid)
  	tem[k++] = arr[i++]; 
    while (j <= right)
 	tem[k++] = arr[j++]; 
    for (i = 0; i < k; i++)
    arr[left + i] = tem [i]; 
}

