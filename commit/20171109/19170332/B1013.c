#include<stdio.h>
int p(int M,int N,int j,int i);
int main()
{
int M,N;
scanf("%d%d",&M,&N);
int k,l=1;
k=M;
for(k=M;k<=N;k++,l++){
  printf("%d", p(M,N,1,2));
if(l%10==0)
  printf("\n");}
printf("\n");
return 0;
}
int p(int M,int N,int j,int i)
{
int  m;
for(j;j<=M;i++,j++)
if (j<=N)
 {
     for (m=1;m<=i;m++)
      {
        if (i%m!=0)
        return i;
        break;
      }
 }
}
