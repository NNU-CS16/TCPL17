#include <stdio.h>
int main()
{
    int i, m, n, a, b, sum=0;
    int c[100000]={0}, d[100000]={0}, e[100000]={0};
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d%d", &a, &b);
        c[a]=b;
        c[b]=a;
    }
    scanf("%d", &m);
    for (i=0; i<m; i++)
    {
        scanf("%d", &d[i]); e[d[i]]=i;
    }
    for (i=0; i<m; i++)
        if (c[d[i]] == 0 || c[d[i]] != 0 && e[d[i]] != 0 && e[c[d[i]]] ==0)
           sum++;
        else {e[d[i]]=0; e[c[d[i]]]=0;}
    printf("%d\n", sum);
    for (i=0; i<100000; i++)
        if (e[i] != 0)
        {
            if (sum>1)
              printf("%05\n", i);
            else  printf("%05\n", i); break;
        }
    return 0;
}
    
