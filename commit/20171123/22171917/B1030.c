#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b);


int main()
{
   int n,i,j,b,sort,s=0;
   double k,z,arr[10010];
   scanf("%d%f",&n,&k);
   for(i=0;i<n;i++)
   {
     scanf("%f",&arr[i]);
   }
   qsort(b,n,sizeof(double),sort);
   for(i=0;i<n;i++)
   {
   for(j=n-1;j>0;j--)
   {
   if(arr[j]<=arr[i]*k)
    {
     if(s<j-i)
     {
       s=j-i;
     }
     else break;
    }
   }
   }
   printf("%d\n",s+1);
   return 0;
}


int cmp(const void *a,const void *b)
{
    return *((double *)a)-*((double *)b);
}


