 #include <stdio.h>
 #include <string.h>
 void reverse(char *str)
{
	int i, m, j;
	m = strlen(str);
	for (i = 0, j = m-1; j > i; i++, j--)
   {
		char temp;
        temp = *(str+i);
        *(str+i) = *(str+j);
        *(str+j) = temp;
   }
}

 int main()
{
	char str[20];
	scanf("%s", str);
    reverse(str);
    printf("%s\n", str);

	return 0;
}
