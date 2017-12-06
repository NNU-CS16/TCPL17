#include <stdio.h>
#include <string.h>
int count_substr(const char* str, const char* substr);

int main()
{
    char str[20];
    char sub[10];
    scanf("%s",str);
    scanf("%s",sub);
    int p;
    p = count_substr(str,sub);
    if (p  == 0)
    printf("bu han ci zi fu chuan");
    else printf("%d",p);
    return 0;
}
int count_substr(const char* str, const char* substr)
{
    int i,y,j,m,n,x,q = 0,t = 1;
	int count = 0,temp = 1;
    n = strlen(str);
    m = strlen(substr);
    while (1)
	{
		if (temp == count)
			q = q + m;
		else if (t == 0)
			q = q + j ;
		else q = q + 1;
    	for (; q < n; q++)
    	{
			i = q;
        	if (str[i] == substr[0])
            	break;
    	}
    	if (q == n)
		{
        	count = count;
			break;
		}
    	else
    	{
        	x = i;
        	j = 0;
        	while (str[i] == substr[j])
        	{
            	i++;
            	j++;
        	}
       		y = x + j - 1;
   	    	if ((i - 1) == y)
			{
   	    		count++;
				temp = count;
			}
		    else t = 0;
		}
	}
	return count;
}
