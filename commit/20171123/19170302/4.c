#include <stdio.h>
int add (int m, int n);

int main()
{
        int m,n;
        scanf("%d%d",&m,&n);
        printf("%d",add(m,n));
        return 0;
}

int add (int m, int n)
{
        int sum=0,carry=0;
        do{
                sum=m^n;
                carry=(a&b)<<1;
                a=sum;
                b=carry;
        }while(b!=0);
        return a;
}
