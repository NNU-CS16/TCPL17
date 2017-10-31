#include<stdio.h>
int main()
{
int X,Y,N;
scanf("%d",&N);
int count;
count =0;
for(X=1;X<=100;X++)
{
for(Y=X;Y<=100;Y++){
if(X*X+Y*Y==N)
{
count=1;
printf("%d %d\n",X,Y);
}
}
}
if(count=0)
printf("No Solution");
return 0;
}
