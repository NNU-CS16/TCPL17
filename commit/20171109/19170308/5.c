#include<stdio.h>
int Hanoi(int n); 
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",2*Hanoi(n));
    return 0;
}
int Hanoi(int n)
{
    if(n==1) return 1;
    else  return 2*Hanoi(n-1)+1;
}
