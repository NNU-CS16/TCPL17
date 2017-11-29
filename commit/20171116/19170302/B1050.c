#include<stdio.h>

int main()
{
        int N,i,j,temp;
        scanf("%d",&N);
        int str[N];
        for(i=0;i<N;i++)
                scanf("%d",&str[i]);
        for(i=0;i<N;i++)
        {
                for(j=0;j<N-i;j++)
                        if(str[j]>str[j+1])
                        {
                                temp=str[j];
                                str[j]=str[j+1];
                                str[j+1]=temp;
                        }
        }
        int m=1,n;
        while(m*m<=N||N%m!=0)
        {
                m++;
        }
        n=N/m;
        int a[m][n];
        int p=0,k=1;
        while(p<(n+1)/2)
        {
                for(i=p,j=p;j<n-1-p;j++)
                        a[i][j]=str[k++];
                for(j=n-1-p,i=p;i<m-1-p;i++)
                        a[i][j]=str[k++];
                for(i=m-1-p,j=n-1-p;j>p;j--)
                        a[i][j]=str[k++];
                for(j=p,i=m-1-p;i>p;i--)
                        a[i][j]=str[k++];
                p++;
        }
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                        printf("%4d",a[i][j]);
        
        printf("\n");
        }
        return 0;
}
