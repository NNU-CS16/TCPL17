#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
   return *(int*)a>*(int*)b;
}
int main()
{
    int i,n,p;
    int l1=0,l2=0;
    scanf("%d %d",&n,&p);
    long long a[n];
    long long *P=a;
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    qsort(a,n,sizeof(long long),cmp);
    for(i=0;i+l1<n;i++)
    {
        long long int m=a[i]*p;
        while(*P<=m)
        {
           if(P-&a[0] == n) break;
           P++;
        }
        l2=P-&a[i];
        if (l2 > l1)
          l1 = l2;
    }
    printf("%d\n",l1);
    return 0;
}
