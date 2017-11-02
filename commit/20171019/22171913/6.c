#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x==y)
	    printf("C");
    else if(x==z)
	    printf("B");
    else 
	    printf("A");
    return 0;
}
