 #include <stdio.h>
 #include <string.h>

 int main()
{
	int i, j;
	char *ps[] = {"nanjing", "wuxi", "xuzhou", "changzhou", "shuzhou"};
	char *pt = NULL;
	for (i = 0; i < 4; i++)
	{
		for (j = i+1; j < 5; j++)
		{
			if (strcmp(ps[j], ps[i]) < 0)
			{
				pt = ps[i];
				ps[i] = ps[j];
				ps[j] = pt;
			}
		}
	}
	for (i = 0; i < 5; i++)
		puts(ps[i]);
	return 0;
	
}
