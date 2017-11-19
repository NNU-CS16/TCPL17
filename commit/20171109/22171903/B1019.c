#include <stdio.h>
void szhd(int n);
int main()
{
    int n;
    scanf("%d", &n);
    szhd(n);
    return 0;
}

void szhd(int n) 
{
    int a[4];
    int i, j, x, y, tem,o;
    o = n;
    while (n != 6174)
    {
    	for (i = 0; i < 4; i++)
    	{
	    a[i] = n % 10;
	    n = n / 10;
     	}
    	for (i = 0; i < 2; i++)
    	{
	    for (j = 0; j < 3 - i; j++)
	    {
	    	if (a[j] < a[j + 1])
	    	{
	    	    tem = a[j];
		    a[j] = a[j + 1];    
		    a[j + 1] = tem;
	        }
	    }
    	}
	if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
	{
	    printf("%d - %d = 0000\n", o, o);
            break;
	}
    	int x = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
    	int y = a[0] + a[1] * 10 + a[2] * 100 + a[3] * 1000;
    	n = x - y;
        printf("%04d - %04d = %04d\n", x, y, n);
    }
}
