#include <stdio.h>
int LGM(int m,int n)
{
	int r,x = m * n;
    while (1)
    {
    	r = m % n;
    	if (r == 0)
    	{
    		break;
    	}
    	m = n;
    	n = r;
    }
    x /= n;
    return x;
}
int main()
{
	int m,n,i;
    scanf("%d%d",&m,&n);
    if (m < n)
    {
    	i = m;
        m = n;
        n = i;
    }
    printf("最小公倍数为%d",LGM(m,n));
    return 0;
}
