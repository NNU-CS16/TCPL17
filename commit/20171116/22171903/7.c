#include <stdio.h>
#include <string.h>

void sum(char a[], char b[]);
int main()
{
    int i;
    char a[1000];
    char b[1000];
    printf("输入A\n");
    scanf("%s", a);
    printf("输入B\n");
    scanf("%s", b);
    sum(a, b);
    return 0;
}

void sum(char a[], char b[])
{ 
    int m, n, i, tem = 0;
    m = strlen(a);
    n = strlen(b);
    if (m > n)
    {
	n = m;
    }
    for (i = n; i >= 0; i--)
    {
	if (i > 0)
	{
    	    if ( a[i] + b[i] - '0' > '9')
	    {
		a[i - 1] = a[i - 1] + 1;
   		a[i] = a[i] + b[i] - '0' - 10;  
	    }
	    else 
	    {
		a[i] = a[i] + b[i] - '0';
	    }
	}
	if (i == 0)
	{
	    if (a[i] + b[i] - '0' > '9')
	    {
		tem = tem + 1;
		a[i] = a[i] + b[i] - '0' - 10;
	    }
	    else
	    {
		a[i] = a[i] + b[i] - '0';
	    }
	}
    }
    if (tem != 0)
    {
	printf("%d", tem);
    }
    for (i = 0; i < n; i++)
        printf("%c", a[i]);
    printf("\n");
}
