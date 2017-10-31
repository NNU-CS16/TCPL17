#include<stdio.h>

int main()

{

    int a[100];

    int n,m,i;


    scanf("%d %d",&n,&m);


    for(i=0;i<=n-1;i++)

        scanf("%d",&a[i]);

    for(i=0;i<=n-1;i++)

        a[n+i]=a[i];

    for(i=n-m;i<=2*n-m-2;i++)

        printf("%d ",a[i]);

        printf("%d\n",a[2*n-m-1]);


 return 0;

}
