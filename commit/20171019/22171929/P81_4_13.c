#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,flag;
    printf("Please input the number:");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    
    if(n%i==0)
    flag=0;
       if(flag==0)
        printf("no");
       else
        printf("yes");
    return 0;
}
