#include <stdio.h>
    int is_int_pal(int n);
    int main()
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",is_int_pal(n));
        return 0;
     }
     int is_int_pal(int n)
     {
         int i, j, k, flag = 0;
         int a[20];
         for(i = 0; i < 20; i++)
         {
             a[i] = n % 10;
             n = n / 10;
             if (n == 0)
             break;
         }
         for (j = 0, k = i; k > j; j++,k--)
         {
             if(a[j] != a[k])
             flag = -1;
             break;
         } 
         return flag;
     }
