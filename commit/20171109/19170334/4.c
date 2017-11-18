#include <stdio.h>

int main()
{
	int total_steps;
        int max_steps;
        scanf("%d%d",&total_steps,&max_steps);
	climb_stairs(total_steps,max_steps);
        return 0;
}

int cs[100010];
void climb_stairs(int total_steps,int max_steps)
{
	int i,j,k;
        for(i = 1; i <= max_steps; i++) cs[i] = 1;
	for(k = 2; k <= total_steps; k++)
		for(j = 1; j <= max_steps && j <= k; j++)
		{
			cs[k] = (cs[k] + cs[k - j]) % 100007;
		}
        printf("%d\n",cs[total_steps]);
}

