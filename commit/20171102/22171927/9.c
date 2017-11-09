#include <stdio.h>
int is_int_pal(int n);

int main()
{
    int a;
    printf("Please input a:");
    scanf("%d",&a);
    if(is_int_pal(a))
        printf("no\n");
    else 
        printf("yes\n");
    return 0;
}

int is_int_pal(int n)
{ 
    int m=n; 
    int i,j;
    j=0;
    do
    {
        i=n%10;
        j=j*10+i;
        n=n/10;
    }
    while(n!=0);
    
    if(m==j)
        return 0;
    else
        return -1;
}
