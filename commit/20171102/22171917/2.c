#include<stdio.h>
void print_hex(int a);

int main()
{ 
    int a;
    scanf("%d",&a);
    print_hex(a);
    printf("\n");
    return 0;
}

void print_hex(int a)
{
   if(a>0)
   {
    print_hex( a / 16 );
        switch ( a % 16 )
        {
            case 10:printf( "A" ); break;
            case 11:printf( "B" ); break;
            case 12:printf( "C" ); break;
            case 13:printf( "D" ); break;
            case 14:printf( "E" ); break;
            case 15:printf( "F" ); break;
            default:printf( "%c", a % 16 + 48 ); break;
        }
    }
}



