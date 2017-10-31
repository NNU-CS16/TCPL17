#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(void)
{
    int i,n,sum=0;
    float p,f,h;
    int a[100000]; 
    struct sjs
    {
      int num;
      int sub;
    }max, min;
    max.num=0;
    min.num=100000;
    scanf("%d",&n);
    srand(time(NULL));
    
    for(i=0;i<=n;i++)
    {
     a[i]=rand()%n+1;
     if(a[i]>max.num){
     max.num=a[i];
     max.sub=i;
     }
     if(a[i]<min.num){
     min.num=a[i];
     min.sub=i;
     }
     sum+=a[i];
     }
     

     p=sum/n;
     for(i=0;i<=n;i++){
     h+=(a[i]-p)*(a[i]-p);
     }
     f=h/n;
     
     printf("%d %d\n",max.num,max.sub);
     printf("%d %d\n",min.num,min.sub);
     printf("%d",sum);
     printf("%lf %lf %lf",p,f,sqrt(f));
     return 0;
}

     








    
