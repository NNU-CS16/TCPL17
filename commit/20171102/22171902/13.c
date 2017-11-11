#include<stdio.h>
#define M 4
#define N 5
void matrix_transpose(int mat[][N], int transposed[][M]);
int main()
{
    int mat[N][N]={0},transposed[N][M]={0};
    matrix_transpose (mat,transposed);
	return 0;
}

void matrix_transpose(int mat[][N], int transposed[][M])
{
    int i,j,k,m,n;
    printf("输入第一个矩阵行和列数: ");
    scanf("%d%d",&m,&n);

    printf("输入第一个矩阵：");
    for(i=0;i<n;i++)
    {
        printf("输入第%d行：",i+1);
        for(j=0;j<m;j++)
            scanf("%d",&mat[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        transposed[i][j]=mat[j][i];
        printf("%d",transposed[i][j]);
    }
}

