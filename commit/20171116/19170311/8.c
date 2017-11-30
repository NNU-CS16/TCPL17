#include <stdio.h>
int main ()
{
    int N,i=0,j,k=1;
    int arr[100][100];
    scanf("%d",&N);

    while(1)
    {
        for (j=i; j<N-1; j++)
            arr[i][j]=k++;
        for (i++, j--; i<=j; i++)
            arr[i][j]=k++;
        for (j--, i--; j>=N-i-1; j--)
            arr[i][j]=k++;
        for (i--, j++; i>=j+1; i--)
            arr[i][j]=k++;
        if (arr[++i][j+1])
            break;
    }
    for (i=0; i<N; i++)
    {
        for (j=0;j<N;j++)
            printf("%-4d",arr[i][j]);
            printf("\n");
    }
    
    return 0;
}
