/*修改*/
#include "overall.h"

BOOK* Modify()
{
	int price, k = 0;
	char str[9], name[50], author[20];
	char c;
	BOOK* p = Load();
	BOOK* head = p;
	printf("请输入待修改内容的ISBN：");
	scanf("%s", str);
	while (p != NULL)
	{
		if (strcmp(p -> ISBN, str) == 0)
		{
			printf("修改书名（N）\t修改作者（A）\t修改价格（P）\n选择修改内容：");
			scanf("%c", &c);
			if (c == 'N')
			{
				printf("输入书名：");
				scanf("%s", p -> name);
			}
			if (c == 'A')
			{
				printf("输入作者名：");
				scanf("%s", p -> author);
			}
			if (c == 'P')
			{
				printf("请输入价格：");
				scanf("%lf", &p -> price);
			}
			++k;
		}
		else
			p = p -> next;
	}
	if(k == 0)
		printf("未查询到结果");
	return head;
}
