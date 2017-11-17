#include<stdio.h>
#include<math.h>
int is_pow2(int n);
int main()
{
int n,i,j,k;
int M;
int x[100];
int y[100];
scanf("%d",&n);
for(i=0;i<100;i++)
{
k=n%2;
switch(k)
{
case 0:x[i]=0;break;
case 1:x[i]=1;break;
}
n=(n-k)/2;
if(n<2)
break;
}
j=i+1;
x[j]=n;
for(M=0,i=0;i<=j;i++)
M=M+x[i]*pow(10,i);
if(is_pow2(M))
printf("n不为 2 的幂次方\n");
else
printf("n为 2 的幂次方\n");

return 0;
}

int is_pow2(int n)
{
int p=0,q,r,s;
while(1)
{r=pow(10,p);
p++;
if(r>n)
break;
}
q=p;
if(pow(10,q-2)==n)
return 0;
else
return -1;
}
