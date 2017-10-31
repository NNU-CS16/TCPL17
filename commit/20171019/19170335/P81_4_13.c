#include <stdio.h>
#include <math.h>
int main()
{
	int n,i;
	
	scanf("%d",&n);
	float p=sqrt(n);

	for(i=2;i<=p;i++)
           if(n%i==0)
	     break;
	if(i<=p)
	  printf("no\n");
	else
	  printf("yes\n");

        return 0;
}
