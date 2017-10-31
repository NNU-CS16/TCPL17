#include<stdio.h>
int main()
{
	int a=0;
	char ch;
	scanf("%c",&ch);
	while(ch!='.')
	{
		while(ch!=' ')
		{
			a++;	 
		}
	printf("%d",a);
	if(ch==' '&&a>0)
	{		
	a=0;
	printf(" ");
	}
	
	}
	printf("\n");
       return 0;
}

