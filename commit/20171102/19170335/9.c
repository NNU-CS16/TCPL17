#include<stdio.h>
int is_int_pal(int x)
{
	int n;
	int s[100];
	int i=-1,count=1,j,a=0;
	n=x;
	do 
	  {

	    i=i+1;
          s[i]=n%10;
	  n=n/10;
	  count=10*count;
	  }while(n!=0);
	for(j=0;j<=i;j++)
	   {
		   count=count/10;
		   a=s[j]*count+a;
	   }
	return ((a==x)?0:-1);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",is_int_pal(n));
	return 0;
}
