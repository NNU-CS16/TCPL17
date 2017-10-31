#include<stdio.h>
#include<math.h>
int main()
{
  int n,m,i,j,t;//m为每行星号数，i为行数，j为列
  char s;
  scanf("%d %c",&n,&s);
  n-=1;
  m=1;
  
  while(n-2*(m+2)>=0)
  {
    m+=2;
    n-=2*m;
  }          //求出一行最多的星号数
 
  t=m/2;//对称上部分的行数
  for(i=0;i<m;i++)
   {
     for(j=0;j<t-fabs(i-t);j++)
        printf(" ");
     for(j=0;j<fabs(i-t)*2+1;j++)
        printf("%c",s);
      printf("\n");
    }
   printf("%d\n",n);
 
   return 0;
}
   

