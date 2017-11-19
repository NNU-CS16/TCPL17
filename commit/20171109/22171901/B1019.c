#include <stdio.h>
int hd (int n);

int main()
{
    int n , res;
    scanf ("%d" , &n);
    res = hd (n);
    printf ("%d\n" , res);
    return 0;
}

int hd (int n)
{
    int qian , bai , shi , ge;
    qian = n / 1000;
    bai = n % 1000 / 100;
    shi = n % 100 / 10;
    ge = n - 1000 * qian - 100 * bai - 10 * shi;

    int a[4] = {qian , bai , shi , ge};
    int i , j , temp;

    for (i = 0; i < 3; i++)
    {
        for (j = 0 ; j <= 4 - i ; j++)
        {
            if (a[j] > a[j + 1])
            {
             temp = a[j];
             a[j] = a[j + 1];
             a[j + 1] = temp;
            }
        }

    }           //数组内4个元素排序


    int beijian , jian , cha;
    beijian = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
    jian = a[3] * 1000 + a [2] * 100 + a[1] * 10 + a[0];


    if ((qian == bai) && (qian == shi) && (qian == ge))
    {
        printf ("%04d-%04d = 0000\n" , n , n);
        return 0;
    }

    while (cha != 6174)
    {
        hd (n);
        cha = beijian - jian;
        printf ("%04d - %04d = %04d\n" , jian , beijian , cha);
        n = cha;
    }
}

