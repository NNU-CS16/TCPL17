#include<stdio.h>
int main()
{
    int N,M;
    int i,j;
    int a[101];

    scanf("%d %d\n",&N,&M);
    for(i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    int temp1 = a[0];
    for(i = 0;i < M;i++)
    {
        for(j = 0;j < N;j++) 
        {
            if(j == N-1)
            {
                a[0] = temp1;
                break;
            }
            int temp2 = a[j+1];
            a[j+1] = temp1;
            temp1 = temp2;
        }
    }

    printf("%d",a[0]);
    for(i = 1;i < N;i++)
    {
        printf(" ");
        printf("%d",a[i]);
}
       
    return 0;
}
