#include<stdio.h>
void SelectionSort(int arr[], int left, int right)  
{  
    int i, j, k;  
    for (i = left; i< right-1; i++) 
    {  
        k = i;  
        for (j = i+1; j < right; j++) 
        {  
            if (arr[k] > arr[j])  
                k = j;  
        }  
        if (k != i) 
        {  
            int tmp = arr[i];  
            arr[i] = arr[k];  
            arr[k] = tmp;  
        }  
    }
    for(i=left; i<=right; i++)
    printf("%d", arr[i]);
}  

int main()
{
    printf("请输入十个数;\n");
    printf("请输入[a,b]~[1,10];\n");
    int str[10], i, a, b;
    for(i=0; i<10; i++)
        scanf("%d", &str[i]);
    scanf("%d %d",&a, &b);
    SelectionSort(str, a, b);
    return 0;
}
