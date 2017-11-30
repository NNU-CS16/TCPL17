#include <stdio.h>

int main(void)
{
    int N, i, j, M;

    printf("Please input N :\n");
    scanf("%d",&N);

    int block[N][N];

void fullframe(int, int, int, int, int, int block[][N]);

    fullframe(N, N, 0, 0, 1, block);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
	    printf("\t%d",block[i][j]);
        printf("\n");
    }

    return 0;
}
void fullframe(int N, int n, int x, int y, int number, int block[][N])
{
    int i;

    if (n <= 0)
        return;
    if (n == 1)
    {
       block[x][y] = number;
       return;
    }
    for (i = 0; i < n - 1; i++)
    {
        block[x][y] = number;
	    number++;
	    y++;
    }
    for (i = 0; i < n - 1; i++)
    {
	    block[x][y] = number;
	    number++;
	    x++;
    }
    for (i = 0; i < n - 1; i++)
    {
	    block[x][y] = number;
	    number++;
	y--;
    }
    for (i = 0; i < n - 1; i++)
    {
	    block[x][y] = number;
	    number++;
	x--;
    }
    fullframe(N, n-2, x+1, y+1, number, block);
}
