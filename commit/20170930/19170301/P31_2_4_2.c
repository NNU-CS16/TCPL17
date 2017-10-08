#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,b,c;
	printf("x=,a=,b=,c=");
       scanf("%d,%d,%d,%d\n",&x,&a,&b,&c);
       if(sqrt(fabs(x))!=(4*a)/(b*c))
	       printf("!=");
       else
	       printf("=");
        
       return 0;
}

