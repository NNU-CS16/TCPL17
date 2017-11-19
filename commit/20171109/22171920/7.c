#include <stdio.h>
int  BinomialCoefficient(int n,int i);
int main()
{
    int int1;
    int int2;

    printf("\nEnter an integer :\n");
    scanf ("%d",&int1);
    printf("\nEnter a second integer :\n");
    scanf ("%d",&int2);
    printf("\n");
    printf("Binomial Coefficiant : %d\n",BinomialCoefficient(int1,int2));
    return 0;
}

int  BinomialCoefficient(int n,int i)
{
    int n1;
    int n2;

    if ((i == 0) || (i == n))
    {
        return 1;
    }
    else
    {
        n1 = BinomialCoefficient(n-1,i);
        n2 = BinomialCoefficient(n-1,i-1);
        return n1+n2;
    }
}


