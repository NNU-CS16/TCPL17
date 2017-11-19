#include<stdio.h>
void printd(unsigned int n,int d)
{
    if(n/d==0)
        printf("%d",n%d);
    else
        {
        printd(n/d,d);
        printf("%d",n%d);
        }
}
int main()
{
    int a,b,d;
    scanf("%d%d%d",&a,&b,&d);
    int c=a+b;
    printd(c,d);
    return 0;
}





    
