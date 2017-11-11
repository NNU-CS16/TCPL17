#include<stdio.h>
int LCM(int m,int n)
{
	int r,a,b;;
	a=(m>n?m:n);
	b=(m<n?m:n);

	do 
	  {
	    r=a%b;
	    a=b;
	    b=r;
	  }while(r!=0);
	
        return m*n/a;
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",LCM(m,n));
	return 0;
}

