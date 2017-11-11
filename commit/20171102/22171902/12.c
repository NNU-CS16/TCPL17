#include<stdio.h>
#define N 10
#define K 10
void matrix_product(int mat1[][K], int mat2[][N], int produtct[][N]);
int main()
{
    int mat1[N][N]={0},mat2[N][N]={0},produtct[N][N]={0};
	matrix_product(mat1,mat2,produtct);
    return 0;
}

void matrix_product(int mat1[][K], int mat2[][N], int produtct[][N])
{
    int i,j,k,m,n,l;
    printf("请输入第一个矩阵的行数和列数：");
    scanf("%d%d",&m,&n);

    printf("请输入第二个矩阵的列数：");
    scanf("%d",&l);

    printf("请输入第一个矩阵\n");
    for(i=0;i<m;i++)
    {
    printf("请输入第%d行：",i+1);
    for(j=0;j<n;j++)
        scanf("%d",&mat1[i][j]);
    }

    printf("请输入第二个矩阵\n");
    for(i=0;i<n;i++)
    {
     printf("请输入第%d行：",i+1);
     for(j=0;j<l;j++)
        scanf("%d",&mat2[i][j]);
    }
    for(i=0;i<m;i++)
        for(j=0;j<l;j++)
        {
            for(k=0;k<n;k++)
           produtct[i][j]+=mat1[i][k]*mat2[k][j];
        }

        for(i=0;i<m;i++)
        {
         for(j=0;j<l;j++)
         printf("%d ",produtct[i][j]);
         printf("\n");

        }
}

