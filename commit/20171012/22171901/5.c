#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=9;i++)//外循环
    {
      for(j=1;j<=i;j++)//内循环
      {
         printf("%d*%d=%d\n",i,j,i*j);
      } 

      printf("\n");
     } 
	return 0;
}













