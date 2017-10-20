#include <stdio.h>

void main()

{

	int a,b,c,n,m[40];
	scanf("%d",&a);
	b=a;
	c=a;
	for (n=0;a>0;n++)
	{m[n]=a%2;
	a/=2;}
	for(n--;n>=0;n--)
	printf("%d",m[n]);
	printf("\n");
        for (n=0;b>0;n++)
        {m[n]=b%8;
        b/=8;}
        for(n--;n>=0;n--)
        printf("%d",m[n]);
	printf("\n");
        for (n=0;c>0;n++)
        {m[n]=c%16;
        c/=16;}
        for(n--;n>=0;n--)
        printf("%d",m[n]);

}
