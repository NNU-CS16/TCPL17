#include<stdio.h>
  int main()
{
    unsigned short a,b,c;
    short int n;
   
    printf("a=");
    scanf("%o",&a);
    printf("n=");
    scanf("%d",&n);
    
    b=a<<(16-n);
    c=a>>n;
    c=c|b;
    printf("%o\n",c);

    return 0;
}
