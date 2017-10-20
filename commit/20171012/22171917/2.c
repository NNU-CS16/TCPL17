#include<stdio.h>
int main()
{
    int x=1,y=2,m=3,n,z=0;
    printf("n=,x=,y=,m=");
    scanf("%d%d%d%d%d",&x,&y,&m,&n,&z);
    do
    {
       z=z+n;
       n=x*y*m;
       x=x+3,y=y+3,m=m+3;
    }while(n<=(97*98*99));
    
    printf("z=%d\n",z);
    return 0;
}

