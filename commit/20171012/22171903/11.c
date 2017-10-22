#include <stdio.h>
int main()
{
    int a,b,c,d;
    
    scanf("%d",&a);
    b=a+1;
    c=a+2;
    d=a+3;
    printf("%d %d %d %d %d %d\n",a*100+b*10+c,a*100+b*10+d,a*100+c*10+b,a*100+c*10+d,a*100+d*10+b,a*100+d*10+c);
    printf("%d %d %d %d %d %d\n",b*100+a*10+c,b*100+a*10+d,b*100+c*10+a,b*100+c*10+d,b*100+d*10+a,b*100+d*10+c);
    printf("%d %d %d %d %d %d\n",c*100+a*10+b,c*100+a*10+d,c*100+b*10+a,c*100+b*10+d,c*100+d*10+a,c*100+d*10+b);
    printf("%d %d %d %d %d %d\n",d*100+a*10+b,d*100+a*10+c,d*100+b*10+a,d*100+b*10+c,d*100+c*10+a,d*100+c*10+b);
 
    return 0;
}
