#include <stdio.h>
#include <string.h>
void k_reverse(char* str, int k)
{
    int len = strlen(str);
    int i, j ,temp;
    int a = 0, b = k;
    while (b <= len)
    {
	for (i = a, j = b - 1; i < b, j > i; i++, j--)
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
    int k;
    char str[1000];
    scanf("%[^\n]%*c", str);
    scanf("%d", &k);
    k_reverse(str, k);
    printf("\n");
    return 0;
}
