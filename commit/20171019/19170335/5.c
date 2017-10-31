#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c='*';
	int i=0;
     
	while(c!='.')
	     {
	      scanf("%c",&c);
	      
	      if(c==' ')
	       {
		printf("%d ",i);
	        i=0;
	       }
	      else if(c=='.')
		{
	         printf("%d\n",i);
		 break;
		}
	      else
		 i=i+1;
            }
	return 0;
}


