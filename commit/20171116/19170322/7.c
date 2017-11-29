    #include <stdio.h>  
    #include <math.h>  
    #include <string.h>  
    char s[10000];  
    int a[10000],b[10000],c[10000];  
    int main()
    {  
        while(1)
	{  
	    int lena, lenb, lenc, m, n, i;
	    gets(s);
	    lena=strlen(s);
	    for(i = 0; i < lena; i++)
	        a[i + 1] = s[lena - i - 1] - '0';
	    gets(s);
	    lenb = strlen(s);
	    for(i = 0; i < lenb; i++)
		b[i + 1] = s[lenb - i - 1] - '0';
	    lenc = lena > lenb ? lena : lenb;
	    for(i = 1; i <= lenc; i++)
		c[i] = a[i] + b[i];
	    for(i = 1; i < lenc; i++)
		if(c[i] >= 10)
		{
	            c[i + 1]++; 
		    c[i] = c[i] - 10;
		}
	    for(i = lenc; i >= 1; i--)
		printf("%d", c[i]);
	    printf("\n");
	}
        return 0;
    }
