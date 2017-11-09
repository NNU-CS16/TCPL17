#include <stdio.h>
#define M 1
#define K 2
#define N 3
void matrix_product(int mat1[][K],int mat2[][N],int produtct[][N]);

int main()
{
    int mat1[M][K]={1,2};
    int mat2[K][N]={{1,2,3},{4,5,6}};
    int produtct[M][N]={0};
    matrix_product(mat1,mat2,produtct);
    return 0;
}

void matrix_product(int mat1[M][K],int mat2[K][N],int produtct[M][N])
{
    int p=0,q=0,k=0;
    for (p=0; p<M; ++p)
        for(q=0; q<N; ++q)
            for(k=0; k<K; ++k)
                produtct[p][q]+=mat1[p][k]*mat2[k][q]; 
   for(p=0; p<M; ++p)
    {
        for(q=0; q<N; ++q)
            printf("%d",produtct[p][q]);
    }
}
      
        
 



