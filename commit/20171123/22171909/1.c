 #include <stdio.h>

 int f(int i)
 {
    if (i % 2 == 1)
      return i;
    else
      return f(i / 2);
 }
 int main()
 {
  int i, d = 0, N;
  scanf("%d", &N);
  for (i = 1; i <= N; ++i)
    d += f(i);
  printf("%d\n", d);
  return 0;
 }
