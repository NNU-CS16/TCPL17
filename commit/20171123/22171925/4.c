#include <stdio.h>
int add(int n1, int n2)
{
    int s,x,y;
    s = n1 ^ n2;
    x = (n1 & n2) << 1;
    while(s & x != 0)
    {
	y = s;
	s = s ^ x;
	x = (y & x) << 1;		
    }  
    return s ^ x;
}

int main( )
{
    int A,B;

    scanf("%d %d",&A,&B);
    printf("%d\n",add(A,B));
    return 0;
}

