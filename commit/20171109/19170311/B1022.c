#include<stdio.h>
void trans(int ,int );
int main(void)
{
    int A,B,D,sum;
    scanf("%d %d %d",&A,&B,&D);
    sum = A + B;
    trans(sum,D);
    printf("\n");
    return 0;
}

void trans(int a,int b)
{
    int m;
    m = a % b;
    if (a >= b)
    trans(a / b,b);
    printf("%d",m);

}
