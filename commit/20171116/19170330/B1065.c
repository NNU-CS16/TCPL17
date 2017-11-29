#include <stdio.h>
int main ()
{
    int love[1000000]={0};
    int N,ID1,ID2,M;
    int count=0;
    scanf("%d",&N);
    for (int i=0;i<N;i++)
    {
        scanf("%d %d",&ID1,&ID2);
        ID1++;
        ID2++;
        love[ID1] = ID2;
        love[ID2] = ID1;
    }
    scanf("%d",&M);
    for (int i=0;i<M;i++)
    {
        scanf("%d",&ID1);
        ID1++;
        if (love[ID1])
            love[ID1]=0;
        else 
        {
        love[ID1]=-1;
        count++;}
    }

    for (int i=0;i<1000000;i++)
        if (love[i]>0 && !love[love[i]])
        {
            love[love[i]]=-1;
            count++;
        }
        printf("%d\n",count);
        for (int i=0;i<1000000;i++)
            if(love[i]==-1)
            printf("%d%c",i-1,count);
            return 0;
}
