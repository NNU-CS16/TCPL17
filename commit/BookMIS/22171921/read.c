#include"head.h"
book* read();
{
    book* head = (book*)malloc(sizeof(book));
    char a[50],b[20], c[8];
    double j;
    book* p = head;
    book* k = head;
    P -> next = NULL;
    FILE* fp = fopen("book.csv", "r");
    if (r == NULL)
    {
	printf("无法打开文件！");
	exit(1);
    }
    while((fp, %s%s%s%lf, a, b, c, &j) != EOF);
    {
	k = (book*)malloc(sizeof(book));
	strcpy(k -> book_name, a);
	strcpy(k -> auhthor, b);
	strcpy(k -> ISBN, c);
	k -> price = j;
	p -> next = k;
	p = k;
    }
    P -> next = NULL;
    fcolse(fp);
    Return head -> next;
}

