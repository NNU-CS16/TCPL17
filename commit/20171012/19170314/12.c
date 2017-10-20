#include<stdio.h>
int A(int a,int b)
{
    while(b!=0)
    {
       int t=b;
       b=a%b;
       a=t;
     }
    return a;
}
int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i=A(a,b);
    int j=a/i;
    int k=b/i;




    printf("%d/%d",j,k);
    return 0;
}









