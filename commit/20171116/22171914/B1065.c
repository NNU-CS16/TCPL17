#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int cmp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
     int n;
     int a[100010]={-1};
     scanf("%d",&n);
     int temp1,temp2;
     for(int i=0;i<n;i++)
     {
         scanf("%d %d",&temp1,&temp2);
         a[temp1] = temp2;
         a[temp2] = temp1;
     }
     int m;
     scanf("%d",&m);
     int b[100010];
     for(int i=0;i<m;i++)
     {
         scanf("%d",&b[i]);
     }
     int c[100010];
     int h = 0;
     int i,j;
     int temp;
     int k;
     for(i=0;i<m;i++)
     {
         if(a[b[i]]!=-1)
         {
             temp = a[b[i]];
             for(j=0;j<m;j++)
             {
                 if(b[j]==temp)
                 {
                     break;
                 }
             }
             if(j==m)
             {
                 c[h++] = b[i];
             }
         }
         else
         {
             c[h++] = b[i];
         }
     }
     qsort(c,h,sizeof(int),cmp);
     printf("%d\n",h);
     for(i=0;i<h;i++)
     {
         if(!i)
             printf("%05d",c[i]);
         else
             printf(" %05d",c[i]);
     }
}     

