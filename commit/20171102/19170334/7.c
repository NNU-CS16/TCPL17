#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",GCD_recursive(m,n));
	printf("%d\n",GCD_iterative(m,n));
	return 0;
}

int GCD_recursive(int m, int n)
{
	int r,a,b;
	if(m >= n)
	{
		r = m % n;
		if(r != 0)
		{
			m = n;
			n = r;
			GCD_recursive(m, n);
		}
		else
		return n;
	}
        if(m < n)
        {
                r = n % m;
                if(r != 0)
                {
                        n = m;
                        m = r;
                        GCD_recursive(m, n);
                }
                else
                return m;
        }

}

int GCD_iterative(int m, int n)
{
	int r;
	if(m >= n)
	{
		r = m % n;
		while(r != 0)
		{
			m = n;
			n = r;
			r = m % n;
		}
		return n;
	}
	if(m < n)
	{
		r = n % m;
		while(r != 0)
                {
                        n = m;
                        m = r;
			r = n % m;
		}
		return m;
	}
}
