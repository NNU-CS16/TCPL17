  #include "sadstory.h"
	
  int main()
  {
	struct book *head = create();

	char name[50] = {0};
	char author[20] = {0};
	char isbn[13] = {0};
	menu();
	int choice;
	int search_choice;

	scanf("%d", &choice);
	switch(choice)
	{
		case 0:
		{	
			printf("============★ [8]  书名查询============\n");
			printf("============★ [9]  ISBN查询============\n");	
			printf("============★ [10] 作者查询============\n");
			printf("请选择：");
			scanf("%d", &search_choice);
			
			switch(search_choice)
			{
				case 8:
					printf("请输入书名：");
					fgets(name, sizeof(name), stdin);		
					del_str_line(name);                 
					name_search(head, name);
					break;
				case 9:
					printf("请输入ISBN号：");
					scanf("%s", isbn);
					isbn_search(head, isbn);
					break;
				case 10:
					printf("请输入作者名：");
					fgets(author, sizeof(author), stdin);
					del_str_line(author);
					author_search(head, author);
					break;
			}	
		}	
		break;
		case 1:
			add_book(head);
			break;
		case 2:
			book_print(head);
			break;
		case 3:
			{
				struct count *newhead;
				newhead = statistics(head);
				book_count(head);
				author_count(newhead);
				author_max_count(newhead);
				price_count(head);
			}
			break;
		case 4:
			borrow(head);
			break;
		case 5:
			return_book(head);
			break;
		case 6:
			revise(head);
			break;
		case 7:
			book_delete(head, isbn);
			break;
	}

	return 0;
}
