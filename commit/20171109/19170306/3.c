#include<stdio.h>
void move(int,int *,int);
int main()
{
int N;int * ways;* ways=0;
scanf("%d",&N);
move(0,ways,N);
printf("%d\n",(*ways)%100007);
return 0;
}

void move(int begin,int * ways,int N)
{
if (begin==N) 
	{
	(*ways)++;
	return;
	}
if (begin>N)
	return;
move(begin+1,ways,N);
move(begin+2,ways,N);
}
