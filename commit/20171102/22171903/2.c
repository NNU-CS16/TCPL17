#include <stdio.h>

void print_hex(int a);
int main()
{
    int a;
    scanf("%d", &a);
    print_hex(a);    

    return 0;
}

void print_hex(int a)
{
    int m, b, i=1;
    if (a > 15)
    {
        b = a;
        for ( ; b > 15; )
        {
            b = b / 16;
            i = i * 16;
        }
        for ( ; i>=1; )
        {
            m = a / i;
    	    a = a % i;
            i = i / 16;   
            switch (m)
            {
      	        case 10:printf("A"); continue;		
                case 11:printf("B"); continue;
    	        case 12:printf("C"); continue;
     	        case 13:printf("D"); continue;
                case 14:printf("E"); continue;
                case 15:printf("F"); continue;
                default:printf("%d", m);
       	    }
        }
        printf("\n");
    }
        else
        {
            switch (a)
            {
                case 10:printf("A"); break;
	        case 11:printf("B"); break;
	        case 12:printf("C"); break;
	        case 13:printf("D"); break;
	        case 14:printf("E"); break;
     	        case 15:printf("F"); break;
                default:printf("%d", a);
            }
            printf("\n"); 
        }
}      
