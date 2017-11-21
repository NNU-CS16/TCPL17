nclude <stdio.h>
int count_stair (int n, int k);

int main ()
{
    int n , k , res;
    scanf ("%d%d", &n , &k);
    res = count_stair (n , k);
    return 0;
}

int count_stair (int n, int k)
{
    int *f = int [n]; //定义一个数组来存放从第n阶台阶走的种类
    int i;
    for (i = 0 ; i <= n ; i++)
    {
        f[i] = 0;     //将数组中的元素初始化为0
    }

    f[0] = 1;
}

