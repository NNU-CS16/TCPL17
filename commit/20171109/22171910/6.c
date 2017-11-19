/*汉诺塔加强加强版*/
#include <stdio.h>
void move(char a, char c);
void hanoi(int n, char a, char b, char c);
int count(int n);

int main()
{
  int n;
  scanf("%d", &n);
  hanoi(n, 'A', 'B', 'C');
  printf("移动次数为:%d", count(n));
  return 0;
}

void move(char a, char c)
{
  printf("%c->%c\n", a, c);
}

void hanoi(int n, char a, char b, char c)
{
  if (n == 1)
  {
	move(a, b);
	move(b, c);
  }
  else
  {
	hanoi(n - 1, a, b, c);
	move(a, b);
    hanoi(n - 1, c, b, a);
	move(b, c);
	hanoi(n - 1, a, b, c);
  }
}

int count(int n)
{
  if (n == 1)
     return 2;
  return 3 * count(n - 1) + 2;
}
