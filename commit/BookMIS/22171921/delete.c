#include "head.h"
void delete()
{
    int i;
    book* head = read();
    printf("\t\t1.删除\n");
    printf("\t\t0.返回\n");
    scanf("%d", &i);
    while(i)
    {
	char arr[50];
        book* p = head;
	book* q;
	printf("\t\t删除的书名：");
	scanf("%s", arr);
	while(strcmp(arr, p -> book_name))
	{
	    q = p;
	    p = p -> next;
	}
	q -> next = p -> next;
	free(p);
	printf("\t\t1.继续删除\n");
	printf("\t\t0.退出\n");
	scanf("%d", &i)
    }
    FILE* fp;
    if ((fp = fopen("book.csv", "w")) = NULL)
    {
	printf("无法打开文件!")
	exit(1);
    }
    while(head != NULL)
    {
	fprintf(fp, "\t\t%s\n\t\t%s\n\t\t%s\n\t\t%lf\n", head -> book_name, head -> author, head -> ISBN, head -> price);
	head = head -> next;
    }
    fclose(fp);
}

