#include<stdio.h>
int main()
{
  int A,j,i,k,m,x=0;
  scanf("%d\n",&A);
  if(A>0&&A<6)
 {
   for(i=A;i<=A+3;i++)
   for(j=A;j<=A+3;j++)
    if(j!=i)
      for(k=A;k<=A+3;k++)
       if(k!=i&&k!=j)
      {
        m=100*i+10*j+k;
        x+=1;
        printf("%d\t ",m);
        if(x%6==0) printf("\n");
      }
   
 }
  return 0;    
}
