#include <stdio.h>
#define M 2
#define N 3
void matrix_transposed (int mat[][N],int transposed[][M]);

int main()
{
    int mat[M][N]={{1,2,3},{4,5,6}};
    int transposed[N][M];
    matrix_transposed (mat,transposed);
    return 0;
}

void matrix_transposed (int mat[][N],int transposed[][M])
{
    int p=0,q=0;
    for(p=0; p<M; p++)
    {
        for(q=0; q<N; q++)
        {   
            transposed[p][q]=mat[q][p];
        }
    }
    for(p=0; p<N; p++)
    {
        for(q=0; q<M; q++)
        {
            printf("%d",transposed[p][q]);
        }
        printf("\n");
    }
}
