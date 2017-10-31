#include <stdio.h>
#include <math.h>
 
int main()
{
    int x,y,n,t,mark;
 
    scanf("%d",&n);
 
    t = sqrt(n/2);
    mark = 1;
    for(x=0;x<=t;x++)
    {
        y = sqrt(n - x*x);
        if(x*x + y*y == n)
        {
            printf("%d %d\n",x,y);
            mark = 0;
        }
    }
 
    if(mark)
        printf("No Solution");
 
    return 0;
}
