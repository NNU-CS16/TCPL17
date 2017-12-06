#include<stdio.h>
#include<math.h>
int bin_insert(int,int,int,int);
//int binary(int)
int main()
{
int n,m,i,j;
scanf("%d %d %d %d",&n,&m,&i,&j);
printf("%d\n",bin_insert(n,m,i,j));
return 0;
}

int bin_insert(int n,int m,int i,int j)
{
int bn[32];
int bm[32];
int c[32];
int k,l=0,numn=0,numm=0;
int max,min,sum=0;
for(k=0;k<33;k++)
{
//if(n==0)break;
bn[k]=n%2;
n=(n-n%2)/2;
numn++;
if(n==0)break;
}
numm++;
for(k=0;k<32;k++)
{
//if(m==0)break;
bm[k]=m%2;
m=(m-m%2)/2;
numm++;
if(m==0){bm[k+1]=1;break;}
}
//min=(numm-1)<j?numm:j;
//max=(numm-1)>=j?numm:j;
for(k=0;k<33;k++)
{
if(k<i)
{c[k]=bn[k]||0;continue;}
if(k>=i&&k<=numm)
{c[k]=bn[k]||bm[l];l++;continue;}
if(k>numm&&k<numn)
{c[k]=bn[k]||0;continue;}
if(k>=numn)
break;
}
for(k=0;k<numn;k++)
sum=sum+c[k]*pow(2,k);
return sum;
}
