#include <stdio.h>  
int main()  
{  
       	int i,a,b;  
	char c;  
        scanf("%d%c%d",&a,&c,&b);  
	
	for(i=1;i<=a;i++)
	{
	  if(a%i==0 &&	b%i==0)
	    {
	     a=a/i;
	     b=b/i;
	    }
	}
	printf("%d/%d\n",a,b);  
        return 0;  
}   
