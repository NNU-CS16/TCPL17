#include <stdio.h>
#include <string.h>

void k_reverse(char* str, int k);
int main()
{
    char* str;
    int k;
    printf("输入字符串\n");
    scanf("%s", str);
    printf("输入反转字符的个数\n");
    scanf("%d", &k);
    k_reverse(str, k);

    return 0;
}

void k_reverse(char* str, int k)
{
    int a, i, j;
    a = strlen(str);
    for (i = 0; i < a; i = i + k)
    {
	if (a - i >= k)
   	{
	    for (j = k - 1; j >= 0; j--)
	    {
	    	printf("%c", str[i + j]);
	    }
    	}
        else
	{
	    for (j = i; j < a; j++)
	    {
		printf("%c", str[j]);
	    }
	}
    }
    printf("\n");
}
