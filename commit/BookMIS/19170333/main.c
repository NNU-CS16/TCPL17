#include <stdio.h>
#include "bookmis.h"
int main (void)
{
    int code = status ();
	if (code == 1)
		student ();
	else manger ();

    printf ("Thank you and goodbye !\n");
    return 0;
}
