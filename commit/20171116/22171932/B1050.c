#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cmp(const void *p,const void *q);
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, N, sizeof(int), cmp);
    int row = ceil(sqrt(N));
    int col = sqrt(N);
    while (col * row != N)
    {
        if(row * col < N)
        {
            row++;
        }
        else if (row * col > N)
        {
            col--;
        }
    }
    int b[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            b[i][j] = 0;
        }
    }
    int i = 0, j = 0;
    int count = 0;
    while (count != N)
    {
        for ( ; j < col; j++)
        {
            if (!b[i][j])
            {
		b[i][j] = a[count++];
            }
            else 
            {
		break;
	    }
        }

