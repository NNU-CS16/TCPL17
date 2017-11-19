#include <stdio.h>
#include <string.h>
int main( )
{
    char a[100000];
    int i, len, sum = 0, j = 0, k = 0, b;
    printf ("请输入一个字符串：");
    gets(a);
    len = strlen(a);
    for (i = 0; i < len; i++)
    {
	if (a[i] >= 'a' && a[i] <= 'z')
	    sum = sum + a[i] - 'a' + 1;
        if (a[i] >= 'A' && a[i] <= 'Z')
	    sum = sum + a[i] - 'A' + 1;
    }
    while (sum != 0)
    {
	b = sum % 2;
	if (b == 0)
	    j++;
	if (b == 1)
	    k++;
	sum = sum / 2;
    }
    printf ("%d %d", j, k);
    return 0;
}
