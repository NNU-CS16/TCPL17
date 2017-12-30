  #include "sadstory.h"


  void return_book(struct book *head)
  {
	struct book *p;
	p = head;
	char isbn[14];
	printf("请输入图书的ISBN号：");
	scanf("%s", isbn);
	
	while(p != NULL)
	{
		int t = strcmp(p->isbn, isbn);
		if(!t)
		{
			p->num = 1;
			printf("还书成功！\n");
		}
		else
		{
			p = p->next;
		}
	}
	if(p == NULL)
	{
		printf("还书失败,请检查ISBN号是否正确!\n");
	}
  }
