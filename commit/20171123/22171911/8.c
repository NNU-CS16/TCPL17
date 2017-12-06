#include <stdio.h>
#include <stdlib.h>
int comp(int a, int b)
{
    return a-b;
}
int main( )
{
    int N, i, len;
    printf ("输入N：");
    scanf ("%d", &N);
    int a[N], b[N];
    printf ("输入原数组：");
    for (i = 0; i < N; i++)
    {
	scanf ("%d",&a[N]);
    }
    for (i = 0; i < N; i++)
    {
	scanf ("%d", &b[i]);
    }
    int j;
    for (i = 0; b[i] <= b[i+1] && i < N - 1; i++)
	for (j = i + 1; a[j] == b[j] && j < N; j++)
	{
	    len = i == N ? len + 1:0;
	    if (len)
		printf ("插入排序");
           qsort(a, len, sizeof(int), comp);
	    else
	    {
		printf ("归并排序\n");
		for(len = 1, i = 0; i < N && len <= N; len = 2)
		{
		    for(i = 0; i < N && a[i] == b[i]; i++)
			for(j = 0; j< N / len; j++)
			    qsort(a + j,len,sizeof(int),comp);
			    qsort(a+j,N%len,sizeof(int),comp);
                }
           }
            return 0;
}
		    
	    
                










