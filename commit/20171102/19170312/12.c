#include<stdio.h>
#define M 4
#define K 5
#define N 6
void matrix_product(int mat1[][K],int mat2[][N],int product[][N])
{
    for(int i=0;i<=M-1;i++)
    {
        for(int j=0;j<=N-1;j++)
        {
            product[i][j]=0;
            for(int k=0;k<=K-1;k++)
                product[i][j]+=mat1[i][k]*mat2[k][j];
        }
    }
}
int main()
{
    int mat1[M][K],mat2[K][N],product[M][N];
    int i,j;
    for(i=0;i<=M-1;i++)
    {
        for(j=0;j<=K-1;j++)
        scanf("%d",&mat1[i][j]);
    }
    for(i=0;i<=K-1;i++)
    {
        for(j=0;j<=N-1;j++)
        scanf("%d",&mat2[i][j]);
    }
    matrix_product(mat1,mat2,product);
    for(i=0;i<=M-1;i++)
    {
        for(j=0;j<=N-1;j++)
        printf("%d\t",product[i][j]);
        printf("\n");
    }
    return 0;
}
