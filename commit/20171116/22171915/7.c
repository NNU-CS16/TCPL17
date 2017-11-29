#include <stdio.h>
#include <string.h>

int main()
{
	char a[1000];
	char b[1000];
	int c[2000];
	int q,p,n,m,s,len1,len2,i,j,k;
	printf("输入a,b:");
	scanf("%s %s", a, b);
	len1 = strlen(a);
	len2 = strlen(b);
	m = 0;
	k = 0;
	for (i = len1 - 1,j = len2 - 1;i >= 0 && j >= 0; i--,j--)
	{
		s = (a[i]-'0' + b[j]-'0') + m;
		m = s/10;
		n = s%10;
		c[k] = n; 
		k++;
	}
	if (len1>len2)
	{
		for (q = (len1 - len2 -1); q >= 0; q--)
		{
			s = (a[q]-'0') + m;
			m = s/10;
			n = s%10;
			c[k++] = n;
		}
	}
	if (len1 < len2)
	{
		for (q = (len2 - len1 -1); q >= 0; q--)
		{
			s = (b[q]-'0') + m;
			m = s/10;
			n = s%10;
			c[k++] = n;
		}
	}
	for(p = k-1;p>=0;p--)
		printf("%d",c[p]);
	return 0;
}    
