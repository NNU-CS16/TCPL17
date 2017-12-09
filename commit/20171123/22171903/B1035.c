#include <stdio.h>
#include <stdlib.h>

int flag, o;
void InsertSort(int b[], int n, int o);

void Merg(int b[], int left, int right);
void MergeSort(int b[], int left, int right);

void judge(int a[], int b[], int n);

int main()
{
    int a[100], b[100], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
	scanf("%d", &a[i]);
    }
    for (i = 0; i < n; ++i)
    {
	scanf("%d", &b[i]);
    }
       
    judge(a, b, n);

    if (flag == 0)
    {
    	printf("Insertion Sort\n");
	InsertSort(b, n, o);
    }
    else if (flag == 1)
    {
	printf("Merge Sort\n");
        MergeSort(b, 1, n); 
    }
    return 0;
}


void judge(int a[], int b[], int n)
{
    int i;
    o = -1;
    flag = 0;
    for (i = 1; i <= n; ++i)
    {
        if (b[i] < b[i - 1])
        {
	    o = i;
            break;
	}
    }
    for (i = o; i < n; ++i)
    {
        if (a[i] != b[i])
        {
	    flag = 1;
            break;
	}
    }
    return;
}


void InsertSort(int b[], int n, int o)
{
    int i, c;
    for (i = 0; i < o; i++)
    {
      	if (b[o] < b[i])
        {
            c = b[o];
            b[o] = b[i];
            b[i] = c;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", b[i]);
	if (i == n)
	    printf("\n");
	else 
	    printf(" ");
    }
}


void MergeSort(int b[], int left, int right)
{
    int i;
    int m = right / (o * 2);
    for (i = 0; i < m; i++)
    {
	Merg(b, i * o * 2, (i + 1) * o * 2 - 1);
    }
    for (i = 0; i < right; ++i)
    {
	printf("%d", b[i]);
	if (i == right - 1)
	    printf("\n");
	else
	    printf(" ");
    }
}



void Merg(int arr[], int left, int right)
{
    int tem[100]; 
    int i = left, mid =  (left + right) / 2, j = mid + 1;
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




