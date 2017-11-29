#include<stdio.h>
void Bubblesort(int arr[],int N)
{
    int i,j;
    for(i=0;i<N;i++)
        for(j=i+1;j<N;j++)
            if(arr[i]>arr[j])
            {
                int m;
                m=arr[i];
                arr[i]=arr[j];
                arr[j]=m;
            }
}
int is(int arr[],int m,int n)
{
    int i,flag=0;
    for(i=0;i<m;i++)
        if(arr[i]==n) return 1;
    return 0;
}
int main()
{
    int i,j,k,N,M;
    scanf("%d",&N);
    int lover[N][2];
    for(i=0;i<N;i++) 
        scanf("%d %d",&lover[i][0],&lover[i][1]);
    scanf("%d",&M);
    int total[M];
    for(i=0;i<M;i++)
        scanf("%d",&total[i]);
    int s=0,flag,dog[10000];
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            for(k=0;k<2;k++)
            {
                flag=0;
                if(total[i]==lover[j][k] && is(total,M,lover[j][1-k])==1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==0)
        {
            dog[s]=total[i];
            s++;
        }
    }
    Bubblesort(dog,s);
    int n=0;
    printf("%d\n",s);
    for(i=0;i<s;i++)
    {
        printf("%d",dog[i]);
        n++;
        if(n!=s)
            printf(" ");
        else
            printf("\n");
    }
    return 0;
}
