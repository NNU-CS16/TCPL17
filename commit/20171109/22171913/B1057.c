#include <stdio.h>
#include <ctype.h>
int main()
{
    int m, s = 0;
    char c;
    scanf("%c", &c);
    while((c = getchar()) != '\n')
    {
	if (isalpha(c))
	    m = tolower(c) - 'a';
	    s = s + m;
    }
    int zero = 0, one = 0;
    while(s)
    {
	if(s % 2 == 0)
	    zero++;
	else
	    one++;
	s = s / 2;
    }
    printf("%d %d\n", zero, one);
    return 0;
}
	   
