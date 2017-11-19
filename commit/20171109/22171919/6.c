#include <stdio.h>
int time = 0;
void Move(char source, char target);
void Hanoi(int n, char source, char help, char target);
	    
int main()
{
	int n;
	scanf("%d",&n);
	Hanoi(n, 'A', 'B', 'C');
	printf("%d\n",time);
	
	return 0;
}
  
void Move(char source, char target)
{
	printf("%c->%c\n",source,target);
	time++;
}
  
void Hanoi(int n, char source, char help, char target)
{
	if (n == 1)
	{
		if (source == 'A' && target == 'C')
	{
		Move(source, help);
		Move(help, target);
	}
		else
			Move(source, target);
	}
	else
	{
		Hanoi(n - 1, source, target, help);
		if (source == 'A' && target == 'C')
		{
			Move(source, help);
			Move(help, target);
		}
		else
			Move(source, target);
		Hanoi(n - 1, help, source, target);
	}
}          
