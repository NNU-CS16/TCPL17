#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[] )
{

    FILE *fp1, *fp2;
    char temp[1] = "/";
    char c;
    fp1 = fopen( argv[1], "r" );
    int i = strlen( argv[1] ) - 1;
    while ( argv[1][i] != '/' && i >= 0 ) 
    {
        i--;
     }
    if ( i >= 0 )
         strcat( argv[2], argv[1] + i );
    else 
    {
         strcat( argv[2], temp ); 
         strcat( argv[2], argv[1] ); 
    }
    fp2 = fopen( argv[2], "w" );
    c = fgetc( fp1 );
    while ( c != EOF )
    {
	fputc( c, fp2 );
	c = fgetc( fp1 );
    }
    fclose( fp1 );
    fclose( fp2 );
    return 0;
}
