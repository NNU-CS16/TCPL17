#include <stdio.h>
int main()
{
 int sum=0,m=1;

 for(int i=1;i<=10;i++)
 { 
  m=m*i;
  sum+=m;  
 }
 printf("%d",sum);
 return 0;
}
 

