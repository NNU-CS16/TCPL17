#include<stdio.h>
int climb(int,int,int,int*);

int main()
{
int N,K;
int *s;
*s=0;
scanf("%d %d",&N,&K);
if(N<1||N>1000||K<1||K>100)
printf("Wrong!\n");
else
climb(N,K,0,s);
printf("%d\n",(*s)%100007);
return 0;
}

int climb(int N,int K,int n,int *s)
{
int k;
if(n==N)
return (*s)++;
else if(n>N)
return *s;
else
{
for(k=1;k<=K;k++)
climb(N,K,n+k,s);
}
}


