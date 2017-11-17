#include <stdio.h>
void Move(char source,char target);
void Hanoi(int n,char source,char help,char target);

int main()
{
	int n;
	scanf("%d",&n);
	Hanoi(n,'A','B','C');
	return 0;
}

void Move(char source,char target)
{
	printf("%c->%c\n",source,target);
}

void Hanoi(int n,char source,char help,char target)
{
	if(n == 1)
	{
		if(help == 'B')
		{
			Move(source,help);
			Move(help,target);
		}
		else Move(source,target);
	}
	else
	{
		if(help == 'B')
		{
			Hanoi(n - 1,source,help,target);
			Move(source,help);
			Hanoi(n - 1,target,help,source);
			Move(help,target);
			Hanoi(n - 1,source,help,target);
		}
		else
		{
			Hanoi(n - 1,source,target,help);
			Move(source,target);
			Hanoi(n - 1,help,source,target);
		}
	}
}
