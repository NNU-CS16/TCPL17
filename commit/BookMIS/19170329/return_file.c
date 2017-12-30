  #include "sadstory.h"

  void return_file(struct book *head)
  {
	struct book *p;
	p = NULL;
	FILE *fp;
	if((fp = fopen("Book.csv", "w")) == NULL)
	{
		printf("打开文件失败!\n");
		exit(1);
	}
	while(p -> next != NULL)
	{
		fprintf(fp, "%s,%s,%s,%lf,%d\n", p->name, p->author, p->isbn, p->price, p->num);
		p = p->next;
	}
	fclose(fp);
  }
	
