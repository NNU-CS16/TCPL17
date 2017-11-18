    #include <stdio.h>
    int main()
    {
        int a, b, c, d, s[100];
	scanf("%d %d %d", &a, &b, &d);
	c = a + b;
	int i;
	for(i = 0; i < 100; i++)
	{
	    s[i] = c % d;
	    c = (c - s[i]) / d;
	    if(c == 0)
	        break;
	}
	for(i; i >= 0; i--)
	    printf("%d", s[i]);
	return 0;
     }
