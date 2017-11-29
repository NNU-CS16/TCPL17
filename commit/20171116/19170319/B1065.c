#include <stdio.h>
int main()
{
    int cp[100001] = {0};
    int n,m;
    int id1,id2;
    int count = 0;
    int i;
    scanf("%d",&n);
    for (i = 0;i < n;i++)
    {
        scanf("%d%d",&id1,&id2);
        id1++;
        id2++;
        cp[id1] = id2;
        cp[id2] = id1;
    }
    scanf("%d",&m);
    for (i = 0;i < m;i++)
    {
        scanf("%d",&id1);
        id1++;
        if (cp[id1])
            cp[id1] = 0;
        else
        {
            cp[id1] = -1;
            count++;
        }
    }
    for (i = 0;i < 100001;i++)
    {
        if (cp[i] > 0 && cp[cp[i]] == 0)
        {
            cp[cp[i]] = -1;
            count++;
        }
    }
    printf("%d\n",count);
    for (i = 0;i < 100001;i++)
    {
        if (cp[i] == -1)
            printf("%d ",i-1);
    }
    printf("\n");
    return 0;
}
