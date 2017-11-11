#include <stdio.h>
#include <string.h>
int is_int_pal (int n);

int main()
{
	int n;
	printf("please input n=");
	scanf("%d", &n);
	printf("%d\n", is_int_pal(n));
        return 0;
}

int is_int_pal (int n)
{
	int i = 0, j = 0, m;
	int flag = 0;
	char s[50];
	while (n > 0)
	{
		m = n % 10;
		s[i] = m;
		i++;
		n = n / 10;
	}
	for (i = 0, j = strlen(s)-1; j > i; i++, j--)
	{
		if (s[i] != s[j])
		{
			flag = -1;
		        break;
		}
	}
        return flag;
}
		
