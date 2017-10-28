#include <stdio.h>
#include <time.h>
#include <math.h>

int t,h1[3000]={0},h2[3000]={0},i=0;

void cheng(int h[],int l)
{
    int j,k;
    int h3[3000]={0};

    for (j=0;j<t;j++)
      for (k=0;k<l;k++)
         h3[j+k]+=h1[j]*h[k];

    for (j=0;j<t+l+1;j++)
      {
        h3[j+1]+=h3[j]/10;
        h3[j]%=10;
        h1[j]=h3[j];
      }
    t=t+l+1;
    while (h1[t]==0) t--;
    t++;

}

void pw(int n)
{
    if (n>1)
    if (n%2==0)
    {
      pw(n/2);
      cheng(h1,t);
    }
    else
