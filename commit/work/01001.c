#include <stdio.h>

int main()
{
    int n ,i = 0;
    scanf("%d",&n);
    while( n )
    {
        if(n%2==0)
            n=n/2;
        else
            n=(3*n+1)/2;
        i++;
	if ( n==1 )
	    break;
    }
    printf("%d\n",i);
    return 0;
}
