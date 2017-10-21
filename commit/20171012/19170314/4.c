#include<stdio.h>
int main(void)
{
    int i,p,s;
    for(i=2,p=1,s=1;i<=10;i++)
    {
        p*=i;
        s+=p;
    }
    printf("%d\n",s);
    return 0;
} 
