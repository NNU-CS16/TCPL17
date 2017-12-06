#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int N,a[100],b[100],i,j,len;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N;i++)
        scanf("%d",&b[i]);
    for(i=0;i<N-1 && b[i]<=b[i+1];i++);
    for(len=++i;i<N && b[i]==a[i];i++) ;
    if(i!=N)
        len=0;
    if(len!=0)
    {
        printf("Insertion Sort\n");
        qsort(a,len,sizeof(int),cmp);
    }
    else
    {
        printf("Merge Sort\n");
        for(len=1,i=0;i<N && len<=N;len*= 2)
        {
            for(i=0;i<N && a[i]==b[i];i++) ; 
            for(j=0;j<N/len;j++)
                qsort(&a[j*len],len,sizeof(int),cmp);
            qsort(&a[j*len],N%len,sizeof(int),cmp);
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d",a[i]);
        if(i==N-1)
            printf("\n");
        else
            printf(" ");
    }
    return 0;
}
