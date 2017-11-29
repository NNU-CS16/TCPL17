#include<stdio.h>
int main()
{
    int c[10001]={0},n,id1,id2,m;
    int count=0;
    scanf("%d",&n);
    int i;
    for (i=0; i<n; i++)
    {
    scanf("%d %d",&id1,&id2);
    id1++;
    id2++;
    c[id1] = id2;
    c[id2] = id1;
    }
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        scanf("%d",&id1);
        id1++;
     if ( c[id1] )
        c[id1]=0;
     else
     {
        c[id1]=-1;
        count++;
     }
    }
    for (i=0;i<100001; i++)
        if (c[i]>0 && !c[c[i]])
        {
            c[c[i]] = -1;
            count++;
        }
    printf("%d\n",count);
    for (i=0; i<100001; i++)
        if(c[i] == -1)
            printf("%05d%c",i - 1,--count ? ' ':'\0');
    return 0;
}
