#include <stdio.h>
#include <math.h>

int main ()
{  
    int i,sum,a,b,d,out;
    int temp[10000];

    scanf("%d%d%d",&a,&b,&d);
    sum = a + b;
    for (i=0;sum!=0;i++)
    {
        temp[i] = sum%d;
        sum = sum/d;
    }

    for (;i>=0;i--)
    {
        out+=temp[i]*pow(10,i);
    }
    printf("%d\n",out);
    return 0;
}

