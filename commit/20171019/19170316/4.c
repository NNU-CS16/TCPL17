#include<stdio.h>
#include<math.h>
int main()
{
int N;
scanf("%d",&N);
int x,y,s,n=0;
for(x=1;x<=sqrt(N/2);x++)
{
for(y=1;y<=sqrt(N);y++)
{s=x*x+y*y;
if(s==N)
{printf("%d %d\n",x,y);
n++;}
}
}
if(n==0)
 printf("No solution");
return 0;
}
