#include <stdio.h>
int main()
{
    int i,sum;
    sum=0,i=2;
    while(i<=100)
    {
	 sum=sum+i;
	 i+=2;
    }
    printf("2+4+6+...+100=%d\n",sum);

    return 0;
}
