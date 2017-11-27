#include <stdio.h>/*PAT B1065 单身狗*/
#include <stdlib.h>

int couple[100000];

struct rec
{
    int id;
    int notinlist;
}
stay[10000 + 1];

int comp(const void*a, const void*b)
{
    return ((struct rec*)a)->id-((struct rec*)b)->id;
}

int main()
{
    int n, m, i, j;
    for(i = 0; i < 100000; ++i)
        couple[i] = -1;
    scanf("%d", &n);
    while(n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        couple[a] = b; couple[b] = a;
    }
    scanf("%d", &m);
    for(i = 0; i < m; ++i)
        scanf("%d", &stay[i].id);
    qsort(stay, m, sizeof(struct rec), comp);
    for(i = 0; i < m; ++i)
    {
        int k = couple[stay[i].id];
        if(k != -1 && stay[i].notinlist == 0)
        {
            j = i + 1;
            while(stay[j].id < k && j < m)++j;
            if(stay[j].id == k)
            {
                stay[j].notinlist = 1;
                stay[i].notinlist = 1;
            }
        }
    }
    int ans[10000+1],c=0;
    for(i = 0; i < m; ++i)
        if(stay[i].notinlist == 0)ans[c++] = stay[i].id;
    printf("%d\n", c);
    for(i = 0; i < c; ++i)
    {
        printf("%05d", ans[i]);
        if(i != c - 1) printf(" ");
    }
	printf("\n");
    return 0;
}
