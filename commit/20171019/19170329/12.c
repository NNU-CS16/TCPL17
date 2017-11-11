#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
     int a[100000],b[100000];
     int n,i,max,min,f1,f2,sum=0,sum2=0;
     float average,s2,s;
  

     scanf("%d",&n);

      for(i=0;i<=n-1;i++)
          a[i]=rand()%(n+1);
          a[0]=max;
     

      for(i=0;i<=n-1;i++)
         {
             if(a[i]>max)
               {
                  max=a[i];f1=i;
               }
          }
       printf("max=%d,i=%d,",max,f1);
           min=a[0];
     
       for(i=0;i<=n-1;i++)
         {
             if(a[i]<min)
               {
                  min=a[i];f2=i;
               }
         }
        printf("min=%d,i=%d,",min,f2);
      
       for(i=0;i<=n-1;i++)
       sum=sum+a[i];
       average=(float)sum/n;


       for(i=0;i<=n-1;i++)
       b[i]=(a[i]-average)*(a[i]-average);


       for(i=0;i<=n-1;i++)
       sum2=sum2+b[i];
       s2=(float)sum2/n;
       s=sqrt(s2);
       printf("sum=%d,average=%.2f,s2=%.2f,s=%.2f\n",sum,average,s2,s);

       return 0;
}
