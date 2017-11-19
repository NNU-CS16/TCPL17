#include <stdio.h>
int main()
{
  char ch;
  int count = 0, count1 = 0, count0 = 0;
  while ((ch = getchar()) != '\n')
  {
    if (97 <= ch&&ch <= 122)
      count += ch - 96;
    if (65 <= ch&&ch <= 90)
      count += ch - 64;
  }
  while (count != 0)
  {
    if (count%2 == 1)
      count1++;
    else
      count0++; 
    count /= 2;
  }
  printf("%d %d\n", count0, count1);
  return 0;
}
