#include<stdio.h>
#define M 2             
#define K 3
#define N 2
void matrix_product(int mat1[M][K], int mat2[K][N], int produtct[M][N]);
int main()
{
int mat1[M][K];
int mat2[K][N];
int product[M][N];
int i,j;
for(i=0;i<M;i++)
   for(j=0;j<K;j++)
    scanf("%d",&mat1[i][j]);
for(i=0;i<K;i++)
   for(j=0;j<N;j++) 
    scanf("%d",&mat2[i][j]);
matrix_product(mat1,mat2,product);
return 0;
}

void matrix_product(int mat1[M][K],int mat2[K][N],int product[M][N])
{
int i,j,x,y,t=0;
int n=0;
for(x=0;x<M;x++)
   for(y=0;y<N;y++)
{
product[x][y]=0;
while(t<K)
{
product[x][y]=product[x][y]+mat1[x][t]*mat2[t][y];
t++;
}
t=0;
}
for(x=0;x<M;x++)
   for(y=0;y<N;y++,n++)
   {
   if(n&&n%N==0)
      printf("\n");
   printf("%d\t",product[x][y]);
   }
printf("\n");
}
