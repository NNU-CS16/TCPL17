#include <stdio.h>
int count1_in_bin(int n);

int main()
{
    int n, c;
    printf("¿¿¿¿¿¿¿:");
    scanf("%d", &n);
    c = count1_in_bin(n);
    printf("¿¿¿¿¿¿¿¿¿1¿¿¿¿%d\n", c);
    return 0;
}

int count1_in_bin(int n)
{
    int b,i = 0;
    for ( ; n != 0; ) 
    {
      b = n & 1;
      if (b == 1) 
        ++i;
      n = n >> 1;
    }
    return i;
}
