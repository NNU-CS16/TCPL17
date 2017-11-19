#include <stdio.h>
int main()
{
	int a, b, D, sum, c[36];
	scanf("%d %d %d",&a, &b, &D);
	sum = a + b;
	int i=0, j;
	while (sum)
    {
 	 c[i++]=sum%D;
 	 sum/=D;
    }
	for (j=i-1; j>=0; j--)
	printf("%d",c[j]);
	if (i==0)
	printf("0");

    printf("\n");	
	return 0;
	
}
