#include <stdio.h>
#include <math.h>

int main()
{

int a, n, b=1,sum=0;

scanf("%d%d", &a, &n);

while (b<=n)
 {
    sum=sum+pow(a,b);
    b++;
 }

printf("sum=%d\n",sum);

return 0;
}

