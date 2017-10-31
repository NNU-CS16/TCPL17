#include<stdio.h>
int main()
{
int i,p,q,N,a,b,c;
printf("Please input the number of row:");
scanf("%d",&N);
if(N>=13)
printf("error");
else
{
for(i=1;i<=N;i++)
  {
  for(p=1;p<=10-i;p++)
  printf(" ");
  for(q=1;q<=2*i-1;q++)
  printf("*");
  printf("\n");
  }
for(a=N-1;a>=1;a--)
 {
  for(b=1;b<=10-a;b++)
  printf(" ");
  for(c=1;c<=2*a-1;c++)
  printf("*");
  printf("\n");
 }
}
return 0;
}














 
