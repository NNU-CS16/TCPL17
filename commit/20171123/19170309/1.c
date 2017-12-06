#include<stdio.h>
int pan(int i);
int main()
{

int n,i,s=0;
scanf("%d", &n);

for(i=1;i<=n;i++)
  {s=s+pan(i);}
printf("%d\n", s);
return 0;
}
int pan(int i)
{
int j=i;
while(i%2==0)
  {i/=2;}
while(j%i!=0)
  {i--;}
return i;
}


