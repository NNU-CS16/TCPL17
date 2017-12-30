 #include <stdio.h>
 #include <stdlib.h>
 #include "cmd.h"
 
 Book *loadbook()
{
	Book *p, *pre, *head, *Truehead;
	char line[100];
	head = (Book *)malloc(sizeof(Book));
	head->next = NULL;
	Truehead = head;
	FILE *fp;
	if ((fp = fopen("book.csv", "r")) == NULL)
	{	
		printf("文件打开失败!\n");
		exit(1);
	}

	while ( fgets(line, 100, fp) != NULL)
	{
		sscanf(line, "%[^\t] %[^\t] %[^\t] %lf", head->name, head->author, head->ISBN, &head->price);
		p = (Book *)malloc(sizeof(Book));
		p->next = NULL;
		pre = head;
		head->next = p;
		head = p;
	}
	pre->next = NULL;
	free(head);
	fclose(fp);
	return Truehead;
}
		
	
	
