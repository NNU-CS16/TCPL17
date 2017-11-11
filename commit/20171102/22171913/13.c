#include <stdio.h>
#define M 3   //定义宏
#define N 4
void matrix_transpose(int mat[][N], int transposed[][M]);
int main()
{
    int mat[M][N], transposed[N][M];  //定义矩阵
    int i, j;
    for (i = 0; i < M; i++)
	for(j = 0;j < N; j++)
    scanf("%d",&mat[i][j]);    //输入原矩阵
    matrix_transpose(mat, transposed);
    return 0;
}
void matrix_transpose(int mat[][N], int transposed[][M])  //调用函数
{
    int i,j;
    for (i = 0;i < N; i++)    //对矩阵的转置
    {
	for (j = 0; j < M; j++)
        {
	    transposed[i][j] = mat[j][i];  
            printf("%d",transposed[i][j]);  //输出转置矩阵
	}
	printf("\n");    //输出时换行
    }
}
