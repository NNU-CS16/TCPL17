#include <stdio.h>
void step ( int n );

int main()
{
    int n,a[0],k;
    scanf("%d%d",&n,&k);
    a[0] = 1;
    a[1] = 1;
    step ( n );
    printf("%d\n", a[n]);
    return 0;
}

void step(int n)
{
   int k;
   int a[1000] = {0};
   if ( n > 1 ) 
   {
      step( n-1 );
      for (int i = (n-k >= 0)?(n-k):0; i < n;i++) a[n] = (a[n]+a[i]) % 100007;
   }
}


