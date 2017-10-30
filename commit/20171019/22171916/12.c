#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
 int arr[100000];
 int max,min;
 int m,n,i,a,b,c=0;
 float he,ping,fang,biao;
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
         he=he+arr[i];
         ping=he/n;
     for(i=0;i<n;i++)
         c=c+(arr[i]-ping)*(arr[i]-ping);
         fang=c/n;
         biao=sqrt(fang);
         printf("%d\n%d\n%d\n%.3f\n%.3f\n%.3f\n",a,b,he,ping,fang,biao);
     return 0;
}
