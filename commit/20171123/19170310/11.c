#include <stdlib.h>
int cmp(const void *a,const void *b)
{
    return*(int*)a-*(int*)b;
}
int main()
{
    int n=9;
    int *p;
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    cmp(const void*a,const void*b)
    p=(int*)bsearch(&n,a,10,sizeof(int),cmp);
    if(p!=NULL) 
        printf("find it!\n");
    else 
        printf("don't find\n");
    return 0;
}
