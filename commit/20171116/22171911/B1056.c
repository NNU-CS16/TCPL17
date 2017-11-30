#include <stdio.h>
int main( )
{
    int couple[100001], temp1, temp2, n, m, i, count = 0;
    scanf ("%d",&n);
    for (i = 0; i < n; i++)
    {
	scanf ("%d %d", &temp1, &temp2);
	temp1++;
	temp2++;
	couple[temp1] = temp2;
	couple[temp2] = temp1;
    }
    scanf ("%d",&m);
    for (i = 0; i < m; i++)
    {
	scanf ("%d", &temp1);
	temp1++;
	if (couple[temp1])
	    couple[temp1] = 0;
	else
	{
	    couple[temp1] = -1;
	    count++;
	}
     }
     for (i = 0; i < 100001; i++)
         if (couple[i] > 0 && !couple[couple[i]])
	 {
	     couple[couple[i]] = -1;
	     count++;
	 }
     printf ("%d\n", count);
     for (i = 0; i < 100001; i++)
         if (couple[i] == -1)
	    printf ("%d%c", i - 1, --count?' ':'\0');
     return 0;
}
	    
