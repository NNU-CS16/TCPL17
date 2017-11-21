 #include <stdio.h>

 int step( int n, int i,int j )
 {
   if (n == 1 || n == 0) 
     return i;
   if (n == 2) 
     return j; 
   return step ( n-1, j , (i + j));
 }

 int main()
 {
    int n;
    scanf("%d", &n);
    printf("%d\n", step( n, 1, 2 )%100007 );
    return 0;
 }
