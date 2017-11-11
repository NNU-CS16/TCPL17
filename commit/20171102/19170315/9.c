  #include <stdio.h>
  int is_int_pal(int);
  int main()
  {
     int n;
     scanf("%d",&n);
     if(is_int_pal(n))
     {
         printf("%d是回文串\n",n);
     }
     else
     {
         printf("%d不是回文串\n",n);
     }
     return 0;
  }

  int is_int_pal(int n)
  {
     int a[10] = {0};
     int i = 0, j = 1;
     do
     {
         a[i] = n % 10;
         n = n / 10;
         i++;
     }while(n > 0);
     int p, q, flag = 1;
     for(p = 0, q = i-1; p < q; p++,q--)
     if(a[p] != a[q])
     {
         flag = 0;
         break;
     }
     return flag;
  }
