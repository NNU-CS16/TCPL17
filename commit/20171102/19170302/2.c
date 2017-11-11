#include <stdio.h>
#include <string.h>
void print_hex(int a);
int main()
{
    int n;
    scanf("%d",&n);
	print_hex(n);
    printf("\n");
	return 0;
}

void print_hex(int a)
{
	int i=0, j, p, q;
	while (a > 0)
	{
	p = a % 16;
		switch(p)
		{
			case 10: printf("A"); break;
			case 11: printf("B"); break;
			case 12: printf("C"); break;
			case 13: printf("D"); break;
			case 14: printf("E"); break;
			case 15: printf("F"); break;
            default:printf("%d",p);break;
		}
	a = a / 10;
	}
}
