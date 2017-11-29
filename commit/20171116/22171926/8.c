#include<stdio.h>
int main()
{
       int i,j;
       int n;
       int **matrix;
       scanf("%d", &n);
       matrix=(int **)malloc(n*sizeof(int *));
       for(i=0;i<n;i++)
              matrix[i]=(int *)malloc(n*sizeof(int));
       if(n<=0)
              return;
       if(n==1) 
    {
              matrix[x][y]=start;
              return;
       }
       for(i=x;i<x+n-1;i++)
              matrix[y][i]=start++;
       for(j=y;j<y+n-1;j++)
              matrix[j][x+n-1]=start++;
       for(i=x+n-1;i>x;i--)
              matrix[y+n-1][i]=start++;
       for(j=y+n-1;j>y;j--)           
              matrix[j][x]=start++;
       SetMatrix(matrix,x+1,y+1,start,n-2); 
}      
       for(i=0;i<n;i++) 
{
              for(j=0;j<n;j++)
                     printf("%4d",matrix[i][j]);
       printf("/n");
       }
    return 0;
