#include<stdio.h>
int main()
{
 int a,b,c,N;
 printf("请输入行数N（N<13）:");
 scanf("%d",&N);

 for (a=1;a<=N;a++)
	{
	 for(b=1;b<=13-a;b++)
		 printf(" ");
	 for(c=1;c<=2*a-1;c++)
		 printf("*");
	printf("\n");
	}
for(a=N-1;a>=1;a--)
 {
  for(b=1;b<=13-a;b++)
	  printf(" ");
  for(c=1;c<=2*a-1;c++)
	  printf("*");
	printf("\n");
 
 }
 return 0;
}
