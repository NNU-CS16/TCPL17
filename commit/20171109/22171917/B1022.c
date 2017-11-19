#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     int a, b, d;
     scanf("%d%d%d", &a, &b, &d);
     int i = 0, sum = a + b, z[50];
     do{
         z[i++] = sum % d;
         sum /= d;
     }
     while(sum != 0);
     for(i = i - 1; i >= 0; i--)
     {
         printf("%d", z[i]);
     }
    printf("\n");
    return 0;
}
