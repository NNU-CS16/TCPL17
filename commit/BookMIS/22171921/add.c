#include "head.h"    
void add()
{
    int i;
    book* head = read();
    printf("\t\t1.添加\n");
    printf("\t\t0.返回\n");
    scanf("%d", &i);
    while(i)
    {
		char arr[50];
        book* p = head;
		book* shell = NULL;
		book* new = (book*)malloc(sizeof(book));
		new -> next = NULL;
		printf("\t\t添加的书名：");
		scanf("%s", arr);
		while(strcmp(arr, p -> book_name) >= 0 && p -> next != NULL)
		{
	    	shell = p;
	    	p = p -> next;
		}
		printf("\t\t添加的书籍信息\n");
		scanf("%s%s%s%lf", new -> book_name, new -> author, new -> ISBN, &new -> price);
		new -> next = p;
		shell -> next = new;
		printf("\t\t1.继续添加\n");
		printf("\t\t0.退出\n");
		scanf("%d", &i);
    }
    FILE* fp;
    if ((fp = fopen("book.csv", "w")) == NULL)
    {
		printf("无法打开文件!");
		exit(1);
    }
    while(head != NULL)
    {
		fprintf(fp, "\t\t%s\n\t\t%s\n\t\t%s\n\t\t%lf\n", head -> book_name, head -> author, head -> ISBN, head -> price);
		head = head -> next;
    }
    fclose(fp);
}	

