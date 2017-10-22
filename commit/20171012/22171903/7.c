#include<stdio.h>
int main()
{
    int a,b,c,x;
    
    scanf("%d",&x);
    
    a=x/100;
    b=x/10-a*10;
    c=x-a*100-b*10;

      if(c==0)
      printf("");
      if(b==0)
      printf("");
    
    printf("%d\n",c*100+b*10+a);
    return 0;
}
