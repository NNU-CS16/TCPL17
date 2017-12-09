 #include <stdio.h>
 int sum(int n)
 {
   (n > 0) && (n + sum(n - 1));
 }
  
 int main()
 {
   int n;
   scanf("%d", &n);
   printf("%d\n", sum(n));
   return 0;
 }

