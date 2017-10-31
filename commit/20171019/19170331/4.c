#include<stdio.h>
#include<math.h>
 
int main()
{
    int x,y,n,m,f;
    scanf("%d",&n);
    m = sqrt(n/2.0);
    f = 1;
    for(x=0;x<=m;x++)
    {
        y = sqrt(n - x*x);
        if(x*x + y*y == n)
        {
         printf("%d %d\n",x,y);
         f = 0;
        }
    }
 
    if(f)
        printf("No Solution");
 
    return 0;
}
