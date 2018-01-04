/*添加*/
#include "overall.h"

void Add()
{
	int price;
	char ISBN[9], name[51], author[21];
	BOOK* p = Load();
	printf("请输入新的ISBN：");
	scanf("%s", ISBN);
	while (p != NULL)
	{
		if (strcmp (p -> ISBN, ISBN) == 0)
		{
			printf("ISBN不能重复！");
			break;
		}
		else
			p = p -> next;
	}
	if (p == NULL)
	{
		printf("请输入书名、作者、价格：");
		scanf("%s%s%lf", p -> name, p -> author, &p -> price);
		p -> next = NULL;
	}
	else
		Add();
}
