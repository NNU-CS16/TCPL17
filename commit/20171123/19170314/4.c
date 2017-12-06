#include<stdio.h>
int add(int n1,int n2)
{
    int num1,num2;
    num1=(n1&n2)<<1;
    num2=n1^n2;
    while(num1&num2)
    {
        n1=num1;
        n2=num2;
        num1=(n1&n2)<<1;
        num2=n1^n2;
    }
    return num1|num2;
}
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("%d",add(n1,n2));
    return 0;
}
