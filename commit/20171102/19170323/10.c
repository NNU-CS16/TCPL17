 #include <stdio.h>
 #include <string.h>
 int is_str_pal(const char *str)
{
	int i, j, m;
	m = strlen(str);
	for (i = 0, j = m-1; j > i; i++, j--)
    if(*(str+i) != *(str+j))
		return -1;
     
		return 0;
}

 int main()
{
	char str[10];
  
	scanf("%s", str);

	int b;
	b = is_str_pal(str);
	if (b == 0)
		printf("is");
    else 
		printf("not");

	return 0;
}
