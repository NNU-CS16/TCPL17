#include <stdio.h>
int yueshu(int N);

int main()
{
   int N, i, sum=0;
   scanf( "%d", &N);
   for ( i = 1; i <= N; i++)
   {
     sum+=yueshu(i);
   }
   printf( "%d\n", sum );
   return 0;
}

int yueshu(int N)
{
   int i,j;
   for ( i = 1; i <= N; i = i+2) 
   if( N%i == 0)
    j = i;
    return j;
}

   
