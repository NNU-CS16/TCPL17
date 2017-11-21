 #include <stdio.h>

 int step(int n, int i,int j)
 {
  int k;
   if (n == 1 || n == 0) 
      return i;
   if (n <= k) 
      return j; 
   return step( n-1, j, (i + j));
 }

 int main()
 {
  int n,k;
  scanf("%d %d", &n, &k);
  printf("%d\n", step(n, 1, k)%100007 );
  return 0;
 }
