#include <stdio.h>

void Move(char a, char c);
void Han(int n, char a, char b, char c);

int main(void)
{
    int n;

    printf("Please input N:\n");
    scanf("%d", &n);
    Han(n, 'A', 'B', 'C');

    return 0;
}

void Move(char a, char c)
{
   printf("%c -> %c\n", a, c);
}

void Han(int n, char a, char b, char c)
{
  if (n == 1)
     Move(a, c);
  else
  {
     Han(n - 1, a, c, b);
     Move(a, c);
     Han(n - 1, b, a, c);
  }
}
