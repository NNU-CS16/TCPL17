#include<stdio.h>

int Div(int n)
{
    int i;
    for(i=n;i>=1;i--)
	if(i%2&&n%i==0)
            return i;

}

int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	s+=Div(i);
    printf("%d\n",s);
    return 0;
}
