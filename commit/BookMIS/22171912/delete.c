/*删除*/
#include "overall.h"

BOOK* Delete()
{
	int k;
	char str[9];
	char c;
	printf("请输入待删除书目的ISBN：");
	scanf("%s", str);
	BOOK* p = Load();
	BOOK* head = p;
	BOOK* prev = NULL;
	while (p != NULL)
	{
        if (strcmp(str, p -> ISBN) == 0)
            break;
        prev = p;
        p = p -> next;
    }
    if (p == NULL)
        printf("未查询到相关书籍");
    if (p == head)
        head = head -> next;
    else
        prev -> next = p -> next;
	if (k == 0)
		p = p -> next;
	free (p);
	return head;
}
