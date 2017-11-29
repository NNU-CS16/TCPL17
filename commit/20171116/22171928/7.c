#include <stdio.h>
#include <math.h>
#include <string.h>
	char a[1001],b[1001];
	char number1[1001],number2[1001];
	int sum[1005] = {0};
int  main()
{
    int c;
    scanf("%s%s",a,b);
    int lena = strlen(a), lenb = strlen(b), big;
    int x = 0;
    int i, j;

    if(lena >= lenb)
	big = lena;
    else
	big = lenb;
    for (i = 0; i <= big+1; i++)
	{
        number1[i] = '0';
        number2[i] = '0';
    }
    for (i = lena, j = 0; i >= 1; i--)
        number1[i] = a[j++];
    for (i = lenb, j=0; i>=1; i--)
        number2[i] = b[j++];
    for (i = 1; i <= big+1; i++)
	{
        c=number1[i]+number2[i]-'0'-'0';
        sum[i] = c;
        sum[i]+=x;
        if (sum[i] >= 10)
		{
            x = 1;
            sum[i]-=10;
        }
        else
            x = 0;
    }
    if (sum[big+1]>0)
		big++;
    for (i = big; i >= 1; i--)
        printf("%d", sum[i]);
		printf("\n");
    return 0;
}
