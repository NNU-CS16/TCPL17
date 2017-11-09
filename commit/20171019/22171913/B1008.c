#include<stdio.h>
int main()
{
    int m,n,i,c=0,a[105];
    scanf("%d%d",&n,&m);
    m=n-m%n;
    for(i=0;i<n;++i)
    {
	    scanf("%d",&a[i]);
    }
    for(i=m;i<n;++i)
    {
	    printf("%d",a[i]);
            ++c;
	    if(c!=n)
	    {
		 printf(" ");
	    }
    }
    for(i=0;i<m;++i)
    {
	    printf("%d",a[i]);
	    ++c;
	    if(c!=n)
            {
		    printf(" ");
	    }
    }
    printf("\n");
    return 0;
}


