#include <stdio.h>
#include <stdlib.h>
int cmp(void const *a,void const*b);
int main(int argc, char const *argv[])
{
     double *a,p;
     int i,j,n,count=0;
     while(~scanf("%d %lf",&n,&p))
     {
         a=(double*)malloc(n*sizeof(double));
         for(i=0;i<n;i++)
         scanf("%lf",&a[i]);

        qsort(a,n,sizeof(double),cmp);
        for(i=0;i<n;i++)//遍历将a[i]作为最小值
             for(j=i+count;j<n;j++)//
                 {
                 if(a[j]>(a[i]*p))
                     break;
                 if(j-i+1>count)
                     count=j-i+1;
                 }    
        printf("%d\n",count );
        free(a);
     }
     return 0;
}
int cmp(void const *a,void const*b)
{
     return *((double*)a)-*((double*)b);
}
