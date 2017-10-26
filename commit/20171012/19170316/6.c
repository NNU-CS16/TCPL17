#include<stdio.h>
int main()
{
int x,y,N;
scanf("%d",&N);
if(N<13)
{
for(x=1;x<=N;x++)
{
for(y=1;y<=N-x;y++){printf(" ");}
for(y=N-x;y<N+x-1;y++){printf("*");}
printf("\n");
}
for(x=N-1;x>=1;x=x-1)
{
for(y=1;y<=N-x;y++){printf(" ");}
for(y=N-x;y<N+x-1;y++){printf("*");}
printf("\n");
}
}
if(N>=13)
printf("please put N<13");
return 0;
}
