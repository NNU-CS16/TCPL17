#include<stdio.h>
int main()
{
    int a,n,i,I=0;  
    
    printf("Please input a:");
    scanf("%d",&a);
    printf("Please input n:");
    scanf("%d",&n);
    int K=1;

    for (i=1;i<=n;i++)
       {
         
         K=K*a;
         I=I+K;
        }
    printf("%d\n",I);

    return 0;
}
