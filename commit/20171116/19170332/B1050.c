#include<stdio.h>
int main()
{
   int i,j,a,m,n;
   int num=0,temp=0;
   scanf("%d",&a);
   int arr[a];
   for (i=0;i<a;i++)
     scanf("%d",&arr[i]);
   for(i=0;i<a;i++)
     for(j=0;j<a-1;j++)
        if(arr[j]<arr[j+1])
          {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
     for(m=1;m*n<a||a%m!=0;m++)
          n=a/m;
     int b[m][n];
     int k;
     for(k=0;k<m;k++)
     {
         for(i=k;i<n-k;i++)
            b[k][i]=arr[num++];
         for(j=k+1;j<m-k;j++)
            b[j][i-1]=arr[num++];
         for(i=n-k-2;i>=k;i++)
            b[j-1][i]=arr[num++];
     }
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
            printf("%d",b[i][j]);
            if(j!=n-1)
            printf(" ");
         }
         printf("\n");
     }
     return 0;
}

