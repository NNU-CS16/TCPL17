#include<stdio.h>
int han(int x,int y)
{
	int i=0;
	int k=0;
	int j,p;
	do
	  {
           p=x%10;
	   if(p==y)
	     i=i+1;
	   x=x/10;
	  }
	while(x>=10);
	if(x==y)
	  i=i+1;
	if(i==0)
	  k=0;
	else
	 {
	  for(j=1;j<=i;j++)
	   k=k*10+y;
	 }
	return k;
}
int main()
{
	int a,da,b,db;
	int m,n;
	scanf("%d%d%d%d",&a,&da,&b,&db);
        m=han(a,da);
	n=han(b,db);

	printf("%d\n",m+n);

	return 0;
}
