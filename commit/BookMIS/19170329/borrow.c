  #include "sadstory.h"

  void borrow(struct book *head)
  {
	struct book *p;
	p = head;
	char isbn[14];
	printf("请输入图书的ISBN号：");
	scanf("%s", isbn);
	while(p != NULL)
	{
		int t = strcmp(isbn, p->isbn);
		if(t == 0)
		{
			if(p->num != 0)
			{
				p->num = 0;
				printf("借书成功!\n");
			}
			if(p->num == 0)
				printf("该书已借出！\n");
		}
		else
		{
			p = p->next;
		}
	}
	
	if(p == NULL)
	{
		printf("无该书相关信息！\n");
	}
  }
