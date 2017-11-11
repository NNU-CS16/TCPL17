#include<stdio.h>
int m,n;
int GCD_iterative(int m,int n);
int main()
{
    printf("Please input two number.\n");
    scanf("%d %d",&m,&n);
    int k=GCD_iterative(m,n);
    printf("%d\n",k);
    return 0;
}
int GCD_iterative(int m,int n)
{
    int i=2,a[100];
    int max=m>n?m:n,min=m<n?m:n;
    a[0]=max%min;
    if (a[0]==0)  return min;
    else a[1]=min%a[0];


    if(a[1]==0) return a[0];
    else{
        for (i=2;a[i-1]!=0;i++)
            a[i]=a[i-2]%a[i-1];
    }
    return a[i-2];
}
