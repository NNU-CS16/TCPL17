#include<stdio.h>
int f(int a[][1000],int n);
int main()
{
     int n,i,j;
     int a[1000][1000];
     scanf("%d",&n);
     f(a,n);
     for(i=0;i<n;i++)
        {
          for(j=0;j<=i;j++)
             printf("%d\t",a[i][j]);
             printf("\n");
        }
}



int f(int a[1000][1000],int n)
{         
     int i,j;
     for(i=0;i<n;i++)
        a[i][0]=1;
     for(i=0;i<n;i++)
        for(j=0;j<=i;j++)
            a[i][j]=1;
     for(i=1;i<n;i++)
        for(j=1;j<=i;j++)  
            a[i][j]=a[i-1][j]+a[i-1][j-1];
}
