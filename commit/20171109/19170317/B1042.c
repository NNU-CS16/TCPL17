#include <stdio.h>
#include <string.h>

int main()
{
	char str[999], b[26];
	int mem[999], a[26];
	int ascii, temp1, temp2, cnt, i, j;
	fgets(str, 999, stdin);
	for (i = 0; i <= strlen(str); ++i)
	  mem[i] = str[i];
	for (ascii = 65, j = 0; ascii <= 90; ++ascii, ++j)
	{
	  cnt = 0;
	  a[j] = 0;
	  for (i = 0; i < strlen(str); ++i)
		if (mem[i] == ascii || mem[i] == ascii + 32)
		{
		  cnt += 1;
		  a[j] = cnt;
		}
	  b[j] = ascii + 32;
	}
	for (i = 0; i < 26; ++i)
	  for (j = 0; j < 26-i; ++j)
	  {
		if (a[j] < a[j+1])
		{
		  temp1 = a[j];
		  a[j] = a[j+1];
		  a[j+1] = temp1;
		  temp2 = b[j];
		  b[j] = b[j+1];
		  b[j+1] = temp2;
		}
	  }
	printf("%c %d\n", b[0], a[0]);
	return 0;
}
