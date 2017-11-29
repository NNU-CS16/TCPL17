#include <stdio.h>
int is_sorted(int arr [ ] , int left, int right);
int main()
{
    int a [ 5 ] ;
    int l, r, i = 0, m;
    scanf("%d%d", &l, &r);
    for (i = 0;i < r;i++)
    {
        scanf("%d", &a [ i ] );
    }
    m = is_sorted(a, l, r);
    if (m == 1)
        printf("no\n");
    if (m == 0)
	printf("yes\n");
    return 0;
}
int is_sorted(int arr [ ] , int left, int right)
{
	int j;
	for (j = left;j <= right;j++)
	{
	    if(arr [ j ] > arr [ j + 1 ] )
                return 1;
            else
                return 0;
	}
}
ÿ
