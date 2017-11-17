#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void) {
	char c, maxC;
	int i, max = 0;
	int* array = (int*)calloc(26, sizeof(int));
	while ((c = getchar()) != '\n') 
	{
		if (isalpha(c)) 
		{
			array[tolower(c)-'a']++;
		}
	}
	for (i = 0; i < 26; i++) 
	{
		if (array[i] > max) 
		{
			max = array[i];
			maxC = 'a' + i;
		}
	}
	printf("%c %d\n", maxC, max);
	free(array);
	return 0;
}
