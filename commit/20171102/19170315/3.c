  #include <stdio.h>
  int is_pow2(int n);
  int main()
  {
     int x;
     scanf("%d",&x);
     int result = is_pow2(x);
     printf("%d\n",result);
     return 0;
  }

  int is_pow2(int n)
  {
     int a = n % 2;
     int b = n / 2;
     if(a * b == 0)
     {
         return 0;
     }
     else
     {
         return -1;
     }
}
