#include <stdio.h>

int main ()
{
    int n;
    int i,j,k,out1,out2;
    int a[4];
    printf("Input n=  ");
    scanf("%d",&n);

    do
    {
        for (i=0;i<4;i++)
        {
            a[i] = n % 10;
            n = n/10;
        }
        for (i=0;i<4;i++)
            for (j=0;j<3;j++)
            {
                if (a[j] > a[j+1])
                {
                    k = a[j];
                    a[j] = a[j+1];
                    a[j+1] = k;
                }
             }
         out1=a[3]*1000 + a[2]*100 + a[1]*10 + a[0];
         out2=a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
            
         printf("%04d - %04d = %04d\n",out1,out2,out1-out2);
         n = out1 - out2;
    }

    while (n!=6174 && n!=0);

    return 0;
}


