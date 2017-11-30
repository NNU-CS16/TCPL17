#include <stdio.h>
void BubbleSort (int arr[] , int left , int right);

int main ()
{
    int arr[10] , left , right;
    int i , res;

    printf("请输入数据：");
    for (i = 0; i <=9; i++)
        scanf ("%d" , &arr[i]);
    printf("输入区间:");
    scanf ("%d%d" , &left , &right);
    BubbleSort (arr , left , right);
    return 0;
}

void BubbleSort (int arr[] , int left ,int right)
{
    int i , j , temp;
    for (i = left - 1; i < right; i++)    //轮数
    {
        for (j = left - 1; j < right - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf ("升序后：");
    for (i = left - 1; i < right; i++)
        printf ("%d " , arr[i]);
    printf ("\n");
}

