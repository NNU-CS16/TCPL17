#include<stdio.h>
int climb(int,int);

int main()
{
int N;
scanf("%d",&N);
if(N<1||N>1000)
printf("Wrong!\n");
else
printf("%d\n",climb(N,N)%100007);


return 0;
}

int climb(int N,int n)
{
if(n==1)
return 1;
else if(n==2)
return 2;
else if(n<=N)
return climb(N,n-1)+climb(N,n-2);
}
