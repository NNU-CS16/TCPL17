#include <stdio.h>

int main ()
{
    int i,sum=0,a=0,b=0;
    char c;
    
    while ((c=getchar())!='\n')
    {
        if (c>='a' && c<='z')
        {
            sum = sum + c-'a'+1;
        }
        else if (c >='A' && c <= 'Z')
        {
            sum = sum + c-'A'+1;
        }
    }
    while (sum>0)
    {
        if (sum % 2==0)
        {
            b++;
        }
        else 
        {
            a++;
        }
        sum/=2;
    }

    printf("%d %d",b,a);
    return 0;
}

