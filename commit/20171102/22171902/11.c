#include<stdio.h>
#include<string.h>
void is_str_pal(char *str);
int main()
{
	char  My_str[20];
	is_str_pal(My_str);
	return 0;
}
void is_str_pal(char *str)
{
	int n = 0; int i = 0;
	for (int i = 0; i < 20; i++)
	{
		scanf("%c", &str[i]);
	    if (str[i] == '\n')
	    {
	 	   n = i; break;
	    }
	}
	for (int i = n-1; i >=0; i--)
	{
		printf("%c", str[i]);
	}
}

