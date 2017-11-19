#include <stdio.h>

int main()
{
    int x,i,j,m,n,k,temp;
    int a[4];
    scanf("%d",&x);
    do  
    {
        for (i=0; i<=3; i++)
        {
            a[i]=x%10;
            x/=10;
         }
         for (i=0; i<=3; i++)
         for (j=0; j<=2; j++)
         {
             if (a[j]>a[j+1])
             {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
              }
          }
          m=a[3]*1000+a[2]*100+a[1]*10+a[0];
          n=a[0]*1000+a[1]*100+a[2]*10+a[3];
          k=m-n;
          x=k;
          printf("%04d-%04d=%04d\n",m,n,k);
         
    }
    while(k!=6174&&k!=0);
    return 0;
}

