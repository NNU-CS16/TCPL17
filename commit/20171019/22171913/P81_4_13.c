#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,m;
    printf("Please input:n(n>3)");
    scanf("%d",&n);
    m=sqrt(n);
    for(i=2;i<=m;i++)
       if(n%i==0)
         break;
       if(i>m)
	 printf("%d是素数\n",n);
       else
	 printf("%d不是素数\n",n);
    return 0;
}
