#include <stdio.h>
#define LEN 128
int main()
{
  
    int a[LEN] = {0};
    char c;
    while ( (c = getchar()) != '\n' )
    {
        if ( c >= 'A' && c <= 'Z' ) 
        c += 32;
        a[c]++;
    }
  
    int i,k;
    int max = -1;
    for ( i = 'a'; i <= 'z'; i++ )
    {    
    if ( a[i] > max )
            max = a[i];
            k = i;
    }
    printf("%c %d\n",k,a[k] );
  
    return 0;
  
}
