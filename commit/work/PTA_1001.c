#include <stdio.h>

int Callatz( int num )
{
    static int flag = 0;
    if ( num == 1 )
        return flag;
    else
    {
        if ( num%2==0 )
        {
            ++flag;
            return Callatz( num/2 );
        }
        else
        {
            ++flag;
            return Callatz( (3*num+1)/2 );
        }
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    if ( num == 1 )
        printf("2\n");
    else 
        printf("%d\n", Callatz( num ) );

    return 0;
}
