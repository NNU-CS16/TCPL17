#include <stdio.h>
int fac_bit_count(int n);

int main()
{
    int n;
    printf("Please input n:");
    scanf("%d",&n);
    fac_bit_count(n);
    return 0;
}

int fac_bit_count(int n)
{
    int i;
    int e=1;
    double p=1;
    for(i=2;i<=n;i++)
    {
        p*=i;
        while(p>=10) p/=10.0,e++;
    } 
    printf("%d\n",e);
    return 0;
}
   
   

