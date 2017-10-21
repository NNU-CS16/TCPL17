#include <stdio.h>
int main()
{
    int i=8,j=10;
    int m=++i;
    int n=j++;
    int x=-i++;
    int y=j+12/++j;
    printf("%d,%d,%d,%d\n",i,j,m,n);
    printf("%d,%d,%d,%d\n",i,j,x,y);
        return 0;
}
