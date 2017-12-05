#include <stdio.h>
#include <string.h>
void k_reverse(char* str, int k);
int main()
{
    int k;
    char str[100];
    scanf("%s %d", str, &k);
    k_reverse(str, k);
    printf("%s\n", str);
    return 0;
}
void k_reverse(char* str, int k)
{
    int i, t;
    int len = strlen(str);
    for (i = k - 1; i < len; i += k)
    {
	t = str[i - k + 1];
	str[i - k + 1] = str[i];
	str[i] = t;
    }
}

	
