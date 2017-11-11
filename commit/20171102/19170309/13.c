#include<stdio.h>
#define M 2
#define N 3
void matrix_transpose (int mat[M][N], int transposed[N][M]);

int main()
{
int mat[M][N];
int transposed[N][M];
int i,j;
for(i=0;i<M;i++)
  for(j=0;j<N;j++)
   scanf("%d",&mat[i][j]);
matrix_transpose(mat,transposed);
return 0;
}

void matrix_transpose(int mat[M][N],int transposed[N][M])
{
int i,j;
int n=0;
for(i=0;i<M;i++)
   for(j=0;j<N;j++)
   transposed[j][i]=mat[i][j];
for(j=0;j<N;j++)
   for(i=0;i<M;i++,n++)
   {
     if(n&&n%M==0)
        printf("\n");
     printf("%d\t",transposed[j][i]);
   }
printf("\n");
}
