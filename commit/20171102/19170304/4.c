#include<stdio.h>
int count1_in_bin(int n);
int main()
{
    int n;
    scanf("%d",&n);

    count1_in_bin(n);
   
    return 0;
}

int count1_in_bin(int n)
{
    int a,i=0;
    while(1)
    {
     a=n%2;
     if(a^0==1) i++;
     n=n/2;
     if(n==0) break;
     }
     printf("%d\n",i);
}
