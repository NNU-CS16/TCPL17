#include<stdio.h>
#include<math.h>
int mod(int x,int y);
int main()
{
    int a,b,c,x,y;
    printf("a,b,c=");
    scanf("%d%d%d",&a,&b,&c);

    x=pow(a,b);
    y=mod(x,c);
    printf("%d\n",y);
return 0;
}

int mod(int x,int y)
{
    int z;
    z=x%y;
return z;
}
