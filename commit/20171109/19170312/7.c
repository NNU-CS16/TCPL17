#include<stdio.h>
int BC(int n,int k)
{
    if(k==0) return 1;
        else if(k==1) return n;
            else if(k==n) return 1;
                else return BC(n-1,k-1)+BC(n-1,k);
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d\n",BC(n,k));
    return 0;
}
    
