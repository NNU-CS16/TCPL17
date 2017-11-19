#include<stdio.h>
void print_hex(int a);
int main(void)
{
	int n;

	scanf("%d",&n);
	
	print_hex(n);

	return 0;

}

void print_hex(int a)
{

	int r;

	r = a % 16;

	if (a >= 16)
	   print_hex(a/16);

	 switch(r)
        {
         case 10: printf("A"); break;
         case 11: printf("B"); break;
         case 12: printf("C"); break;
         case 13: printf("D"); break;
         case 14: printf("E"); break;
         case 15: printf("F"); break;
         default : printf("%d",a%16); break;
        }

	

}

	
