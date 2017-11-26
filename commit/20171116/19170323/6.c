 #include <stdio.h>
 #include <string.h>

 void k_reverse(char *str, int k)
{
	int a = 0, b = k, i, j, temp;
	while (b <= strlen(str))
	{
		for (i = a, j = b-1; i < b, j > i; i++, j--)
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
		}
			a += k;
			b += k;
	}
}

 int main()
{
	char str[10];
	
	fgets(str, 11, stdin);
    
	k_reverse(str, 3);
	
	printf("%s\n", str);
	return 0;
}
