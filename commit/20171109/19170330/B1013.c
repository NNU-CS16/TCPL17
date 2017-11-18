#include <stdio.h>
#include <math.h>

int judge(int n)
{
    int i;
    for (i=2;i<=sqrt(n);i++);
        if(n%i==0)
            return 0;
    else
            return 1;
}

int main()
{
    int i=3,k=2,j=1;
    int n,m;
    scanf("%d%d",&m,&n);
    if(m==1)
        if(n>=2)
        {
            printf("2 ");
            j++;
        }
        else
        {
            printf("2");
            j++;
        }
        while (k<=n)
        {
            if (judge(i))
            {
                if(k>=m)
                {
                     if(j%10==0) printf("%d\t",i);
                     else if(k==n) printf("%d",i);
                     else printf("%d",i);
                     j++;
                }
                k++;
            }
            i++;
        }
        i++;
        return 0;
}
