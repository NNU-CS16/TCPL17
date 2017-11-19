#include <stdio.h>
int min(int n);
int max(int n)
{
    int a[4], i, temp, max;
    a[0] = n / 1000;
    a[1] = n / 100 % 10;
    a[2] = n / 10 % 10;
    a[3] = n % 10;
    for (i = 0; i < 4; i++)
    {
	if (a[i] < a[i+1])
	{
	    temp = a[i];
	    a[i] = a[i+1];
	    a[i+1] = temp;
	}
    }
    max = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
    return max;
}
int min(int n)
{   
    int a[4], i, temp, min;
    a[0] = n / 1000;
    a[1] = n / 100 % 10;
    a[2] = n / 10 % 10;
    a[3] = n % 10;
     for (i = 0; i < 4; i++)
    {
	if (a[i] > a[i+1])
        {
	     temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    min = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
    return min;
}
int main( )
{
    int n, s;
    scanf ("%4d",&n);
    do
    {
	 max(n);
	 min(n);
         s = max - min;
         printf ("%4d - %4d = %4d\n", max, min ,s);
	 n = s;
    }
    while (s == 6174 || s == 0);
    return 0;
}



