#include <stdio.h>
void O(int n,int m)
{
    if (n / m == 0)
    printf("%d", n % m); 
    else
    {
        O(n / m,m);
        printf("%d\n",n % m);
    }
}

int main()
{ 
    int a,b,c,m;
    scanf("%d%d%d",&a,&b,&m);    
    c = a + b;
    O(c,m); 
    return 0; 
}
