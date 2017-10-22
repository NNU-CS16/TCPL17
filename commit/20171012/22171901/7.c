#include <stdio.h>
int main()
{
    int x,a,b,c;
    printf("Input the value of x\n");
    scanf("%d",&x);
    a=x/100;
    b=(x%100)/10;
    c=x%10;
    
    if(c)
      printf("%d",c);
    if(b)
      printf("%d",b);
    
    printf("%d\n",a);

     return 0;
}
