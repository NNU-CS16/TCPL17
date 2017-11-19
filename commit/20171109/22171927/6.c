#include <stdio.h>
int Move(char source,char help,char target);
void Hanoi(int n,char source,char help,char target);
int Hanoi_2(int n);

int main()
{
	int n;
	printf("Please input n:");
	scanf("%d",&n);
	Hanoi(n,'A','B','C');
	printf("%d\n",Hanoi_2(n));
	
	return 0;
}

int Move(char source,char help,char target)
{
	printf("%c->%c\n",source,help);
	printf("%c->%c\n",help,target);
}
void Hanoi(int n,char source,char help,char target)
{
	if(n==1)
		Move(source,help,target);
	else
	{
		Hanoi(n-1,source,help,target);
		printf("A->B\n");
		Hanoi(n-1,target,help,source);
		printf("B->C\n");
		Hanoi(n-1,source,help,target);
	}
}
int Hanoi_2(int n)
{
	if(n==1)
		return 2;
	return 3*Hanoi_2(n-1)+2;
}
