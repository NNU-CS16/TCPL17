#include<stdio.h>
int main()
{
    int i,j,k,p,n;
    printf("n=");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++) {
       for(j=1;j<=n-i;j++)
       printf(" ");
       for(j=1;j<=i*2-1;j++)
       printf("*");
    printf("\n");
}
    for(k=n-1;k>0;k--) {
       for(p=1;p<=n-k;p++)
       printf(" ");
       for(p=1;p<=k*2-1;p++)
       printf("*");
    printf("\n");
}
    return 0;
}
