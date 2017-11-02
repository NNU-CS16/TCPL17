#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int N;
scanf("%d",&N);
int i,s[100000],max=s[1],min=s[1];
for(i=1;i<=N;i++)
s[i]=rand()%(N+1);

int t;
for(i=1;i<=N;i++)
{if(s[i]>max){max=s[i];t=i;}}
printf("max=%d,max mark=%d\n",max,t);

int u;
for(i=1;i<=N;i++)
{if(s[i]<min){min=s[i];u=i;}}
printf("min=%d,min mark=%d\n",min,u);

int sum;
for(i=1;i<=N;i++)
sum=sum+s[i];
printf("sum=%d\n",sum);

int average;
average=(sum/N);
printf("average=%d\n",average);

int S1,S;
for(i=1;i<=N;i++)
S1=S1+(s[i]-average)*(s[i]-average);
S=S1/N;
printf("方差为%d\n",S);

int B;
B=sqrt(S);
printf("标准差为%d\n",B);


return 0;
}
