   #include "sadstory.h"

   void add_book(struct book *head) 
   {
	char name[50];
	char author[40];
	char isbn[20];
	double price;
	int num;
	struct book *p, *h;
	struct book *prev;
	struct book *p1;
	p = head;
	prev = NULL;
	printf("请输入书名:\n");
	getchar ();
	fgets(name, sizeof(name), stdin);
	del_str_line(name);
	while(p->next != NULL)
	{
		if(strcmp(head->name,name ) < 0)
		{
			head = (struct book *)malloc(sizeof(struct book));
			head->next = p;
			strcpy(head->name, name);
			printf("请分别输入作者名、isbn、价格:\n");
			fgets(author, sizeof(author), stdin);
			fgets(isbn, sizeof(isbn), stdin);
			del_str_line(author);
			del_str_line(isbn);
			strcpy(head->author, author);
			strcpy(head->isbn , isbn);
			scanf("%lf", &head->price);
			head->num = 1;
		}
				
		int t = strcmp(p->name, name);
		if(t > 0)
		{
			prev = p;
			p = p->next;
			t = strcmp(p->name, name);
		}
		else if(t < 0)
		{
			prev->next = (struct book *)malloc(sizeof(struct book));
			prev->next = p1;
			p1->next = p;
			strcpy(p1->name, name);
			printf("请分别输入作者名、isbn、价格:\n");
			fgets(author, sizeof(author), stdin);
			fgets(isbn, sizeof(isbn), stdin);
			del_str_line(author);
			del_str_line(isbn);
			strcpy(p1->author, author);
			strcpy(p1->isbn, isbn);
			scanf("%lf", &p1->price);
			p1->num = 1;
		}
		
	}
	
	if(p == NULL)
	{
		prev->next = (struct book *)malloc(sizeof(struct book));
		prev->next = p1;
		strcpy(p1->name, name);
                printf("请分别输入作者名、isbn、价格:\n");
                fgets(author, sizeof(author), stdin);
                fgets(isbn, sizeof(isbn), stdin);
                del_str_line(author);
                del_str_line(isbn);
                strcpy(p1->author, author);
                strcpy(p1->isbn, isbn);
                scanf("%lf", &p1->price);
		p1->num = 1;
	}
		
   }

	void del_str_line(char *str)
   {
        while('\n' != *str && *str)
        {
	        ++str;
        } 
        *str = '\0';
    
   }

