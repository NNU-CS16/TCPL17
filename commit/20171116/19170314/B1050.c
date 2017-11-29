#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,N,i,j,c,d,temp,z,num=0;
    scanf("%d",&N);
    int a[N-1],b[1000][1000];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
  	        a[j]=a[j+1];
                a[j+1]=temp;
             }
        }
    }
    n=sqrt(N);
    while(N%n!=0)  n--;
    m=N/n-1;
    n--;
    c=m;
    d=n;
    z=0;
    while(num<N)
    {
        if(z==m&&z==n) b[m][n]=a[num++];
        for(i=z;i<n&&num<N;i++) b[z][i]=a[num++];
        for(i=z;i<m&&num<N;i++)  b[i][n]=a[num++];
        for(i=z;i<n&&num<N;i++)  b[m][n-i+z]=a[num++];
        for(i=z;i<m&&num<N;i++)  b[m-i+z][z]=a[num++];
         z++;
         m--;
         n--;
    }

    for(i=0;i<=c;i++)
    {    for(j=0;j<d;j++)
         {  
              printf("%d ",b[i][j]);
         }
	 printf("%d\n",b[i][d]);
    }
     return 0;
}
          
        
