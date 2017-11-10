#include <stdio.h>
#include <string.h>
int is_str_pal(const char*str)
{
  	int i=0, n, m;
  	n = strlen(str);
   	while (i <= n / 2)
   	{ 	
   		if (str[i] == str[n-i-1])
      	{
      		i++;
      	}
     	else 
     		break;
   	}
  	if (i > n/2)
   	{ 
   		return 0;	
   	}
   	else 
   		return -1;
}
int main ()
{
  	char str[100];
  	scanf("%s", str);
  	printf("%d\n", is_str_pal(str));
 
  	return 0;
}
