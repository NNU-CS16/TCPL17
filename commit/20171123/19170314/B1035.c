#include<stdio.h>
#include<stdlib.h>
int MAX(int a,int b)
{
    if(a>=b)
        return a;
    return b;
}
int cmp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int n,p,i,j;
    int a[1000];
    int b[1000]={0};
    scanf("%d%d",&n,&p);
    for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    for(i=n-1;i>=0;i--)
        for(j=i-1;j>=0;j--)
	{
            if(a[i]<=a[j]*p)
                b[i]=i-j+1;
        }
    int m=-1;
    for(i=0;i<n;i++)
	m=MAX(m,b[i]);
     printf("%d",m);
    return 0;
}
