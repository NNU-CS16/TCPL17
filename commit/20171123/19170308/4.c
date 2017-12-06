#include <stdio.h>
int add(int n1, int n2)  
{  
    int sum, a;
    if (n2 == 0)  
    {  
 	   return n1;  
    }  
	sum = n1 ^ n2;  
	a = (n1 & n2) << 1;  
   
    return add(sum, a);  
}  
int main()
{
	int n1, n2;
	printf("n1=");
	scanf("%d",&n1);
	printf("n2=");
	scanf("%d",&n2);
	printf("n1+n2=%d\n",add(n1,n2));
	return 0;
}
