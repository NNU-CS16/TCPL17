#include<stdio.h>
void Function(int N);
int function(int n);

int main()
{
    int N;
    printf("Please input N:");
    scanf("%d", &N);
    Function(N);
    return 0;
}

void Function(int N)
{
    int i, sum = 0;
    for (i=1; i<=N; i++)
        sum = sum + function(i);
    printf("%d", sum);
}

int function(int n)
{
    int i;
    if (n%2==0) //偶数//
    {
        for (i=n-1; i>0; i=i-2)
        {
            while (n % i==0)
                return i;
        }
    
    }
    else//奇数//
    {
        for (i=n; i>0; i=i-2)
        {    
            while (n % i==0)
                return i; 
        }
    }
}

















