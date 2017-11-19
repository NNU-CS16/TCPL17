#include <stdio.h>

void Move(char a, char c, int *p);
void Han(int n, char a, char b, char c, int *p);

int main(void)
{
    int n, count = 0, *p;

    p = &count;
    printf("Please input n :\n");
    scanf("%d", &n);
    Han(n, 'A', 'B', 'C', &count);
    printf("%d\n", *p);

    return 0;
}

void Move(char a, char c, int *p)
{
   printf("%c -> %c\n", a, c);
   (*p)++;
}

void Han(int n, char a, char b, char c, int *p)
{
    if (n == 1)
        if (b = 'B')
        {
           Move(a, b, p);
           Move(b, c, p);
        }
        else
           Move(a, c, p);
    else
    {
       if (b == 'B')
       {
           Han(n - 1, a, b, c, p);
           Move(a, b, p);
           Han(n - 1, c, b, a, p);
           Move(b, c, p);
           Han(n - 1, a, b, c, p);
       }
       else
       {
           Han(n - 1, a, c, b, p);
           Move(a, c, p);
           Han(n - 1, b, a, c, p);
       }
    }
}
