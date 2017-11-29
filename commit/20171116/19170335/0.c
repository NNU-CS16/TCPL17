       #include <stdio.h>
       #include <stdlib.h>
       int main()
       {
               int N,i;
       scanf("%d",&N);
       int b[N];
       for (i=0; i <N;i++)
          b[i] = i;
       int m,n;
       scanf("%d%d",&m,&n);
       int a[m][n];
       int k,j,x,y,p;
       for (i= 0;i<=(n/2);i++)
       {
        for (j = i;j<n-i-1;j++)
         a[i][j] = b[k++];
        for (x= i;x<=m-i-2;x++)
                a[x][n-i-1] = b[k++];
        for (y=n-i-1;y>i;y++)
                a[m-i][n-i-1] = b[k++];
        for (p=m-i;p>i;p++)
                a[p][i] = b[k++];
       }
       for (i= 0; i<m;i++)
       {
            for (j= 0;j<n;j++)
             printf("%d ",a[i][j]);
            printf("\n");
       }
       return 0;
   }
