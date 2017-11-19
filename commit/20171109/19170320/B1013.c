#include<stdio.h>
#include<math.h>

int prime(int n);
int prime(int n)
{
    int m;
    for (m=2; m<=sqrt(n); m++)
    {
        if(n % m == 0)
            return 1;
    }
    return -1;
}

int main()
{
    int M,N,i;
    int q;
    q=0;
    int a=0;
    scanf("%d%d", &M, &N);
    for(i=1; i<110000; i++) 
    {
        if (prime(i) == -1)
        {  
            a+=1;
            if (a>M)
            {
                printf("%d",i);
                q++;
                if(a>N)
                    break;
                if(q==10)
                {
                    printf("\n");
                    q=0;
                }
                else
                printf(" ");
            }
        }
    }
    return 0;
}

