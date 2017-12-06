#include <stdio.h>
int main()
{
    int n, i, j, k, flag, temp;
    flag = 1;
    k = 0;
    printf("请输入N：\n");
    scanf("%d", &n);
    int a[n], b[n];
    printf("请输入N个正整数：\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++)
    {
       j = 0;
       while(j < i)
       {
            if( a[j] < a[i])
              j++;
            else
            {
              j++;
              flag = 0;
            }
       }
       
       j++;
       while(j < n)
       {
            if(a[j] > a[i])
              j++;
            else
            {
              j++;
              flag = 0;
            }
       }

       if(flag == 1)
       {
         b[k] = a[i];
         k++;
       }
       flag = 1;
    }
    for(i = 0; i < k - 1; i++)
    {
       for(j = 0; j < k - 1 - i; j++)
       {
          if(b[j] > b[j + 1])
          {
             b[j] = temp;
             b[j] = b[j + 1];
             b[j + 1] = temp;
          }
       }
    }
    printf("可能的主元元素的个数为：%d\n", k);
    printf("主元可能为：");
    for(i = 0; i < k - 1; i++)
    {
       printf("%d ", b[i]);
    }
    printf("%d\n", b[k - 1]);
    return 0;
}
