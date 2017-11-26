#include <stdio.h>
void k_reverse(char* str, int k);

int main()
{
    char str[10];
    scanf("%s",str);
    int k;
    scanf("%d",&k);
    k_reverse(str,k);
    return 0;
}
void k_reverse(char* str, int k)
{
    int n = 0,i,j,t,a;
    for (int x = 0; x < 10; x++)
    {
	if (str[x] != '\0')
	    n++;
    }
    a = n / k;
    if (a == 0)
        printf("%s",str);
    else for (a = 1; a <= n / k; a++)
    {
        for (i = a * k - 1,j = (a - 1)*k; j <= i; i--,j++)
	{
	    t = str[j];
	    str[j] = str[i];
	    str[i] = t;
	}
    }
    printf("%s",str);   
}

