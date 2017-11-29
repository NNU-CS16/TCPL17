#include<stdio.h>
#include<math.h>
void change(int *a,int *b)
{
    int m;
    m=*a;
    *a=*b;
    *b=m;
} 
void Bubblesort(int arr[],int N)
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(arr[i]<arr[j])
                change(&arr[i],&arr[j]);
        }
    }
}
int main()
{
    int N,m,n,i;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=sqrt(N);i++)
    {
        if(N%i==0)
            n=i;
    }
    m=N/n;
    Bubblesort(a,N);
    int s[m][n],j,k=0;
    for(i=0;i<n/2;i++)
    {
        for(j=i;j<n-i-1;j++)
        {
            s[i][j]=a[k];
            k++;
        }
        for(j=i;j<m-i-1;j++)
        {
            s[j][n-i-1]=a[k];
            k++;
        }
        for(j=n-i-1;j>i;j--)
        {
            s[m-i-1][j]=a[k];
            k++;
        }
        for(j=m-i-1;j>i;j--)
        {
            s[j][i]=a[k];
            k++;
        }
     }
     if(n%2!=0)
     {
        for(i=n/2;i<m-n/2;i++)
        {
            s[i][n/2]=a[k];
            k++;
        }
     }
     int flag=0;
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            printf("%d",s[i][j]);
            flag++;
            if(flag%n!=0)
                printf(" ");
            else
                printf("\n");
        }
     }
     return 0;
}
