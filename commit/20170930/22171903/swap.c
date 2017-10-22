#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    printf("a= %d,b= %d\n",a,b);
    
    c=b;
    b=a;
    a=c;

    printf("a= %d,b= %d\n",a,b);
 
    return 0;
}
