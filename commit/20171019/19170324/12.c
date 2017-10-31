#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
 int arr[100000];
 int max,min;
 int m,n,i,a,b,c=0;
 float sum,p,f,q;
 printf("please input N(N<100000):");
 scanf("%d",&n);
 srand(time(NULL));
 for (i=0;i<n;i++)
   {
     m=rand()%n;
     arr[i]=m;

   }
    max=arr[0];
    a=0;
    for (i=0;i<n;i++)
        if(max<arr[i])
             {
              max=arr[i];
              a=i;

             }
        min=arr[0];
        b=0;
    for(i=0;i<n;i++)
       if(min>arr[i])
         {
            min=arr[i];
            b=i;
 
         }
     for(i=0;i<n;i++)
         sum=sum+arr[i];
         p=sum/n;
     for(i=0;i<n;i++)
         c=c+(arr[i]-p)*(arr[i]-p);
         f=c/n;
         q=sqrt(f);
         printf("%d\t%d\n%.2f\t%.2f\t%.2f\t%.2f\n",a,b,sum,p,f,q);
     return 0;
}
