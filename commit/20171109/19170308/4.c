#include<stdio.h>
void move(int,int *,int,int);
int main()
{
int N,K;int * ways;* ways=0;
scanf("%d,%d",&N,&K);
move(0,ways,N,K);
printf("%d\n",(*ways)%100007);
return 0;
}

void move(int begin,int * ways,int N,int K)
{
	if (begin==N)
                {
                (*ways)++;
                return;
                }
        if (begin>N)
                return;

for (int i=1;i<=K;i++)
	move(begin+i,ways,N,K);
}
