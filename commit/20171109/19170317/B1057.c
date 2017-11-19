#include <stdio.h>
#include <string.h>

int main()
{
	char str[100000];
	int mem[100000], len, i, j, N = 0, cnt1 = 0, cnt2 = 0;
	fgets(str, 100000, stdin);
	len = strlen(str);
	for (i = 0; i <= len; ++i)
	{
	  mem[i] = str[i];
	  if (mem[i] >= 65 && mem[i] <= 90)
	  {
		mem[i] = mem[i] - 64;
		N = N + mem[i];
	  }
	  if (mem[i] >= 97 && mem[i] <= 122)
	  {
		mem[i] = mem[i] - 96;
		N = N + mem[i];
	  }
	}
	do
	{
	  i = N % 2;
	  if (i == 0)
		cnt1 += 1;
	  else
		cnt2 += 1;
	  j = N / 2;
	  N = j;
	}while (j != 0);
	printf("%d %d\n", cnt1, cnt2);
	return 0;
}
