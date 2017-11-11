#include <stdio.h>
int is_int_pal(int n);
int main()
{
    int a, b;
    scanf("%d", &a);
    b = is_int_pal(a);
    if (b == 0)
    printf("is");
    if (b == -1)
    printf("not");
    printf("\n");
    return 0;
}

int is_int_pal(int n)
{
    int m, j, i = 0, count = 0, a[100];
    int flag = 0;
    while (n != 0)
    {
	m = n%10;
	n = n/10;
	a[i] = m;
	i++;
	count++;
    } 
    for (i = 0, j = count-1; j > i; i++, j--)
    if (a[i] != a[j])
        {
            flag = -1;
            break;
        }   

    return flag;
}
