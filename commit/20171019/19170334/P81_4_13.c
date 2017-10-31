#include <stdio.h>
#include <math.h>
int main()
{
        int n;
        printf("Please input the number:");
        scanf("%d",&n);
        if(n==2)
        printf ("is prime number");
        else if(n%2==0)
        {printf("is not prime number");}
        else
        {int i;
        for (i=3;i<=n-1;i+=2)
        {if(n%i==0)
        {printf("is not prime number");
        break;}


        }
        if(i>n-1)
        printf("is primr number");
        }
        return 0;
}

