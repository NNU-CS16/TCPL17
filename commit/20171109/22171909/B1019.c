 #include <stdio.h>

 int zeng, jian;
 
 void Kaprekar(int x)
 {
   int a[4], i, j, temp;
   a[0] = x / 1000;
   a[1] = x / 100 % 10;
   a[2] = x / 10 % 10;
   a[3] = x % 10;
   for (i = 0; i < 4; ++i)
      for (j = 0; j < 4 - i; ++j)
          if (a[j] > a[j + 1])
          {
	     temp = a[j];
             a[j] = a[j + 1];
             a[j + 1] = temp;
          }
  
   zeng = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
   jian = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
 }

 int main()
 {
    int n, s;
    scanf("%d", &n);
    if ((n / 1000 == n / 100 % 10) && (n / 1000 == n / 10 % 10) && (n / 1000 == n % 10))
    {
       printf("%04d - %04d = 0000\n", n, n);
       return 0;
    }
    while (s != 6174)
    {
       Kaprekar(n);
       s = jian - zeng;
       printf("%04d - %04d = %04d\n", jian, zeng, s);
       n = s;
    }
    return 0;
 }
