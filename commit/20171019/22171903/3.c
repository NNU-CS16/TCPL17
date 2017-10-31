#include <stdio.h>
int main()
{
    int n,m,i=1,j;
    scanf("%d",&n);
    if(n<0)
    {
       printf("fu ");
       n=-n;
    }
    j=n;
    for(;j>9;)
    {
        j=j/10;
     	i*=10;
    }
    for(;i>0;)
    {
  	m=n/i;
        switch(m)
        {
            case 0:printf("ling");break;
            case 1:printf("yi");break;
            case 2:printf("er");break;
            case 3:printf("san");break;
            case 4:printf("si");break;
            case 5:printf("wu");break;
            case 6:printf("liu");break;
            case 7:printf("qi");break;
            case 8:printf("ba");break;
            default:printf("jiu");
        }
	if(i>9)
 	printf(" ");
        n=n%i;
        i=i/10;
    }
    printf("\n");
    return 0;
}
