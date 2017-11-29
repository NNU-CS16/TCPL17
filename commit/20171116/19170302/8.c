#include<stdio.h>
int main()
{
        int a[20][20]={0};
        int n;
        scanf("%d",&n);
        int p=0,num=1,i,j;
        while(p<(n+1)/2)
        {
                for(i=p,j=p;j<n-p-1;j++)
                        a[i][j]=num++;
                for(j=n-p-1,i=p;i<n-p-1;i++)
                        a[i][j]=num++;
                for(i=n-p-1,j=n-p-1;j>p;j--)
                        a[i][j]=num++;
                for(j=p,i=n-p-1;i>p;i--)
                        a[i][j]=num++;
                p++;
        }
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                        printf("%4d",a[i][j]);
                printf("\n");
        }
        return 0;
}
        
