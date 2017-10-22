#include<stdio.h>
int main()
{
    int i;
    int a=1;
    int b=0;

for(i=1;i<=10;i++)
   {
	a=a*i;
        b=b+a;
   }

    printf("%d\n",b);
    
    return 0;
}
