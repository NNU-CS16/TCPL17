#include <stdio.h>
int count1_in_bin(int n);

int main()
{
    int n;
    printf("Please input n:");
    scanf("%d",&n);
    count1_in_bin(n);
    return 0;
}

int count1_in_bin(int n)
{
    int m;
    m=0;
    while(n>=1)
    {
        if(n%2==1)
            m++,
            n=n/2;
        else
            n=n/2;
    }
    printf("%d\n",m);
}  

         

