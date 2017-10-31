#include <stdio.h>
#include <math.h>
int main()
{
	int N;
	printf("请输入一个小于等于10000的正整数：");
	scanf("%d",&N);

	int X,Y,f;
	f=1;
	for(X=1;X<=100;X++)
	{
	   for(Y=100;X<=Y;Y--)
	   {
	       if(X*X+Y*Y==N)
		 {
		     printf("%d %d\n",X,Y);
		     f=0;
		 }
	   }
	}

	if(f==1) printf("No Solution\n");

	return 0;
}
