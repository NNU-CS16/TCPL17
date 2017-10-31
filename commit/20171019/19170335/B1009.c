#include<stdio.h>
#include<string.h>
int main()
{
	char a[80];
	gets(a);
	int i;

	for(i=strlen(a);i>=0;i--)
	   {
            if(a[i]==' ')
	      {
	       printf("%s",&a[i+1]);
	       printf("%c",a[i]);
	       a[i]='\0';
	      }


	    if(i==0)
	      printf("%s",&a[i]);
	      
	   }

	printf("\n");

	return 0;
}
