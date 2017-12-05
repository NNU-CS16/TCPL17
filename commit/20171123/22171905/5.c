#include <stdio.h>
#include <string.h>

int substr(const char *str, const char *substr)
{
	char *p, *q, count = 0, m;
	for ( ; *str != '\0'; str++)
	{
		count += 1;
		if (*str == *substr)
		{
			m = count-1;
			p = str;
			q = substr;
			for ( ; *q != '\0'; )
			{
				if (*q++ != *p++)
				{	
					m = -1;
					break;
				}
			}
		}
		else 
			m = -1;
		if (m != -1)
			break;
	}
	return m;
}
void main()
{
	 char str1[20], str2[10];
	 int target;
	 scanf("%[^\n]", str1);
	 scanf("%s", str2);
	 target = substr(str1, str2);
	 printf("%d\n", target);

}
