#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char buf[1024]; 
	FILE *fp;            
	int len;            
	if((fp = fopen("test.txt","r")) == NULL)  
	{
		perror("open failed!");
		exit (1) ;
	}
	while(fgets(buf, 1024, fp) != NULL)
	{
		printf("%s",buf);
	}
	putchar('\n');
	fclose(fp);
	return 0;
}
