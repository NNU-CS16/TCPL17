#include <stdio.h>

int main( int argc, char *argv[] )
{

    FILE *fp;
    char c;

    fp = fopen( argv[1], "r" );
    c = fgetc( fp );
    while ( c != EOF )
    {
        putchar( c );
        c = fgetc( fp );
    }

    fclose( fp );

    return 0;

}
