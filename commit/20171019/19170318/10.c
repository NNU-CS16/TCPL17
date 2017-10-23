#include <stdio.h>
#include <time.h>
#include <math.h>

int t,h2[3000]={0};

void cheng(int h[],int l)
{
    int j,k;
    int h3[3000]={0};
   
    for (j=0;j<t;j++)
      for (k=0;k<l;k++)
         h3[j+k]+=h[j]*h2[k];
        
    for (j=0;j<t+l+1;j++)
      {
        h3[j+1]+=h3[j]/10;
        h3[j]%=10;
        h[j]=h3[j];
      }   
    t=t+l+1;
    while (h[t]==0) t--;
    t++;

}

int main()
{
    clock_t start_clock,end_clock;
    double elapsed_time;

    start_clock=clock();
    
    
    int h1[3000]={0};
    int a,b,c,i=0;

    scanf("%d%d%d",&a,&b,&c);

   // for (int ii=1;ii<=1000000000;ii++)
   // { 


    
    while (a>0)
    {      
      h1[i]=a%10;
      h2[i]=a%10;
      a/=10;
      i++;
    }
    t=i;
 
    while (b-1>0) { cheng(h1,i); b--; }
    
    int mod=0;
    for (i=t-1;i>=0;i--)
      mod=(mod*10+h1[i])%c;

    

   // }
    
    printf("%d\n",mod);

    end_clock=clock();
  
    elapsed_time=(double)(end_clock-start_clock)/CLOCKS_PER_SEC;
    printf("%.6lf",elapsed_time*1000000000);

    return 0;

}
