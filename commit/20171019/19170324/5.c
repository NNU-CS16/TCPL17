#include <stdio.h>
int main()
{
	int i;
	char c='0';
	for(i=0;c!='.';)
	{
	    for(;c!=' ';)
	    {
		scanf("%c",&c);
		if(c!=' ') i++;
	    }

	    printf("%d",i);
	    printf(" ");
	}

	return 0;
}
