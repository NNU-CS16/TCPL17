#include<stdio.h>
int main()
{
int N,M;
int i,j,k,l=0,t;
int dognum=0;
scanf("%d",&N);
int cp[N][2];
for(i=0;i<N;i++)
for(j=0;j<2;j++)
scanf("%d",&cp[i][j]);
scanf("%d",&M);
int all[M],dog[M];
for(i=0;i<M;i++)
scanf("%d",all+i);
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
for(k=0;k<2;k++)
{
if(all[i]==cp[j][k])
//break;
goto aa;
}
}
aa:if(j==N&&k==2)
{dognum++;dog[l]=all[i];l++;}
else
//if(j<N-1||k<1)
{
if((2*j+k)%2==0)
{
for(t=0;t<M;t++)
{if(all[t]==cp[j][1])break;}
if(t==M)
{dognum++;dog[l]=all[i];l++;}
}
else
{
for(t=0;t<M;t++)
{if(all[t]==cp[j][0])break;}
if(t==M)
{dognum++;dog[l]=all[i];l++;}
}
}
}
printf("%d\n",dognum);
for(l=0;l<dognum;l++)
printf("%d ",dog[l]);
printf("\n");
return 0;
}
