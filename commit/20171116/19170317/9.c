#include <stdio.h>
#include <string.h>

int main()
{
	int i, j;
	char *pstr[] = {"nanjing", "wuxi", "xuzhou", "changzhou", "shuzhou"};
	char *ptemp = NULL;
	for (i = 0; i < 4; ++i)
	  for (j = 0; j < 4 - i; ++j)
		if (strcmp(pstr[j], pstr[j+1]) > 0)
		{
		  ptemp = pstr[j+1];
		  pstr[j+1] = pstr[j];
		  pstr[j] = ptemp;
		}
	for (i = 0; i < 5; ++i)
	  puts(pstr[i]);
	return 0;
}
