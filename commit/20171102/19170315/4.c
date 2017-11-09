  #include <stdio.h>
  int count1_in_bin(int);
  int main()
  {
     int n;
     scanf("%d",&n);
     count1_in_bin(n);
     return 0;
  }

  int count1_in_bin(int n)
  {
     int i = 0;
     int m = 0;
     int a[20] = {0};
     do
     {
     a[i] = n % 2;
     n = n / 2;
     i++;
     m++;
     }while(n > 0);
     int x = 0;
     for(i = m; i >= 0; i--)
     {
         if(a[i] == 1)
         {
             x++;
         }
     }
     printf("%d\n",x);
  }
