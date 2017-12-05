#include <stdio.h>
int add(int n1, int n2);

int main()
{
    int n1,n2,sum;
    scanf("%d%d",&n1,&n2);
    sum = add(n1,n2);
    printf("%d",sum);
    return 0;
}
int add(int n1, int n2)
{
    if (n2 == 0)
		return n1;
	int sum = n1 ^ n2;
	int temp = (n1 & n2)<<1;
	return add(sum,temp);
}
