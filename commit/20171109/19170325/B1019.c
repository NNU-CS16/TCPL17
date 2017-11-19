#include <stdio.h>

int main(void)
{
  int n, arr[4], i, j, a, b, temp;

  printf("Please input N :\n");
  scanf("%d", &n);
  do
  {
  for (i = 0; i < 4; i++)
  {
    arr[i] = n % 10;
    n = n / 10;
  }
  for (i = 0; i < 3; i++)
    for (j = i + 1; j < 4; j++)
       if (arr[i] < arr[j])
       {
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
       }
  a = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
  b = arr[3] * 1000 + arr[2] * 100 + arr[1] * 10 + arr[0];
  n = a - b;
  printf("%04d - %04d = %04d\n", a, b, n);
  } while (n != 6174 && n != 0);

  return 0;
}
