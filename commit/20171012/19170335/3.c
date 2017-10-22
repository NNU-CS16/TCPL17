#include<stdio.h>
int main()
{
    int i,a,n;
    int sum=0;
    int b=0;
    
    scanf("%d%d",&n,&a);

    for(i=1;i<=n;i++)
       {
	 b=b*10+a;
	 sum=sum+b;
       }
    printf("%d\n",sum);

    return  0;
}
