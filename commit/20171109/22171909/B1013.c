 #include<stdio.h>
 #include<math.h>
 int is_prime(int n)
 {
    int i;
    if (n < 2)
        return -1;
    if (n == 2)
        return 0;
    if ((n & 1) == 0)
        return -1;
    for (i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return -1;
    }
    return 0;
 }

 int main ()
 {
  int  i = 0, b = 0, n, N, M, f[10000];
  scanf("%d %d", &M, &N);
    for(n = 1; n <= 10000; ++n)
    {
       if (is_prime(n) == 0)
       {
         f[b] = n;
         ++b;
       }   
       if (b == 10000)
     break;
    }
        for (b = M - 1; b < N; ++b)
        {
           if (i && i % 10 == 0)
              printf("\n");
              printf("%d\t", f[b]);
        }
  printf("\n");
 return 0;
 }
