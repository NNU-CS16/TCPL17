#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
   return *(int*)a>*(int*)b;
}
int main()
{
    int i, N, p, len=0, newlen = 0;
    scanf("%d %d",&N,&p);
    long long a[N];
    long long *P=a;
    for(i=0; i<N; i++)
        scanf("%lld", &a[i]);
    qsort(a, N, sizeof(long long), cmp);
    for(i=0; i+len<N; i++)
    {
        long long int M = a[i]*p;
        while(*P <= M)
        {
           if(P-&a[0] == N)
             break;
             P++;
        }
        newlen = P-&a[i];
        if(newlen>len)
          len=newlen;
    }
    printf("%d\n",len);
  
    return 0;
}
