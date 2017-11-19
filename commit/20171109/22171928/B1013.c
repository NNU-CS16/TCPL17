#include<stdio.h>
int main()
{
    int M,N,n,i,k,flag,j=1;
    int a[10000];
    a[0]=2;
    for(n=2;n<=104729;n++)
    {
        flag =0;
        for(i=2;i<=n-1;i++)
            if(n%i==0) 
            {
                flag=1;
                break;
            }
         if(flag==0) {a[j]=n,j++;}
    }
    scanf("%d%d",&M,&N);
    int b;
    for(k=M;k<=N;k++)
    {
        printf("%d",a[k]);
        b++;
        if(b%10==0) printf("\n");
        else if(k!=N) printf(" ");
    }
    printf("\n");
    return 0;
}  
