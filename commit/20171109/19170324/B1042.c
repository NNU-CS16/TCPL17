#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char m, str[1000];
	int i, j, sum, len, before = 0;
	gets(str);
	len = strlen(str);

	for (i = 0; i < len - 1; i++)
	{
		 sum = 1;
		 if (str[i] < 65 || str[i] > 122)
             break;
         if (str[i] > 91 && str[i] < 97)
             break;

		 for (j = i + 1; j <= len - 1; j++)
			  if (str[i] == str[j] || fabs(str[j] - str[i]) == 32)
			  sum++;

		 if (sum > before)
		 {
   			 before = sum; 
			 m = str[i];
		 }
		 if (sum == before)
		 {
			 if (m > 65 && m < 90) m = m + 32;
			 if (str[i] > 65 && str[i] < 90) str[i] = str[i] + 32;
			 if (m > str[i]) m = str[i];
			 before = sum;
		 }
	}
	if (m > 65 && m < 90) m = m + 32;
	printf("%c %d\n", m, before);

	return 0;
}
