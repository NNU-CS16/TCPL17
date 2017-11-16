#include <stdio.h>
void print_hex(int a);

int main()
{
    int a;
    scanf("%d", &a);
    print_hex(a);
    return 0;
}

void print_hex(int a)
{
    int n[20], i, b;
    char A, B, C, D, E, F;
    for (i = 0; a != 0; ++i)
    {
         b = a % 16;
         a = a / 16;
         switch (b)
         {
                 case 10:  n[i] = A;
                 case 11:  n[i] = B;
                 case 12:  n[i] = C;
                 case 13:  n[i] = D;
                 case 14:  n[i] = E;
                 case 15:  n[i] = F;
                 default:  n[i] = b;
         }
    }
    for (i = i - 1; i != -1; --i)
         printf("%d",n[i]);
    printf("\n");
}
