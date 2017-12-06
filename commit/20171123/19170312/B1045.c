#include<stdio.h>
#include<stdlib.h>
int cmp (const void *a, const void *b)  
{
    return *(int *)a - *(int *)b;  
}
int is_left(int a[],int i)
{
    int j,flag=0;
    for(j=0;j<i;j++)
        if(a[j]>a[i])
        {
            flag=1;
            break;
        }
    if(flag==0) return 1;
    else return 0;
}
int is_right(int a[],int i,int N)
{
    int j,flag=0;
    for(j=i+1;j<N;j++)
        if(a[j]<a[i])
        {
            flag=1;
            break;
        }
    if(flag==0) return 1;
    else return 0;
}
int main()
{
    int i,j=0,N;
    scanf("%d",&N);
    int a[N],b[N];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N;i++)
        if(is_left(a,i)==1 && is_right(a,i,N)==1)
        {
            b[j]=a[i];
                j++;
        }
    qsort(b,j,sizeof(int),cmp);
    printf("%d\n",j);
    for(i=0;i<j;i++)
    {
        printf("%d",b[i]);
        if(i!=j-1) printf(" ");
        else printf("\n");
    }
    return 0;
}
