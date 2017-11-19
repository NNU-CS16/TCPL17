#include <stdio.h>

int main()
{
	int total_steps;
	int max_steps = 2;
	scanf("%d",&total_steps);
	printf("%d\n",climb_stairs(total_steps,max_steps));
	return 0;
}

int climb_stairs(int total_steps,int max_steps)
{
	if(total_steps == 2)
		return 2;
	if(total_steps == 3)
		return 3;
	if(total_steps >= 4)
		return climb_stairs(total_steps - 1,max_steps) + climb_stairs(total_steps - 2,max_steps);
}
