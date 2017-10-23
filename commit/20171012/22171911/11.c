#include<stdio.h>
int main( )
{
  int A,b,c,d,i,j,n=0;
  scanf ("%d",A);
  for(i=1;i<=4;i++)
  for(j=1;j<=6;j++,n++)
  {
  if(n&&n%6==0)
  printf("\n");
  }
   b=A+1;
  c=A+2;
  d=A+3;
  
    if(i=1)
    printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d",A,b,c,A,b,d,A,c,b,A,c,d,A,d,b,A,d,c);
    if(i=2)
    printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d",b,A,c,b,A,d,b,c,A,b,c,d,b,d,A,b,d,c);
    if(i=3)
    printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d",c,A,b,c,A,d,c,b,A,c,b,d,c,d,A,c,d,b);
    if(i=4)
    printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d",d,A,b,d,A,c,d,b,A,d,b,c,d,c,A,d,c,b);
    return 0;
}
  
