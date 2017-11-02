#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,f;
    long long d;
    scanf("%d%d%d",&a,&b,&c);
	  d=(int)pow(a,b);
          f=d%c;
    printf("%d\n",f);

    return 0;                                                                    
}
