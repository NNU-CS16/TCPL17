#include <stdio.h>
int i = 0;
int H(int n, char source,char help, char target);
int main()
{
    int n, i = 0;
    scanf("%d",&n);
    int m=H(n, 'A', 'B', 'C');
    printf("%d\n",m);
    return 0;
}
int H(int n, char source, char help, char target)
{
    if(n==1)
    i++;
    else
    {
        H(n - 1, source, target, help);
        i++;
        H(n - 1, help, source, target);
    }
    int m = 2 * i; 
    return m;
}
