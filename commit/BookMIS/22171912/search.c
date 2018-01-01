/*查找*/
#include "overall.h"

void Search()
{
	int i = 0, j = 0, k = 0, temp;
	char c;
	char* str, *strp;
	str = (char *)malloc(sizeof(char));
	strp = (char *)malloc(sizeof(char));
	printf("查找ISBN（I）\t查找书名（N）\t查找作者（A）\n请选择功能：");
	scanf("%c", &c);
	while(c)
	{
		BOOK* p = Load();

		if (c == 'I')
		{
			printf("请输入ISBN：");
			scanf("%s", str);
			while(p != NULL)
			{
				if(strcmp(p -> ISBN,str) == 0)
				{
					printf("%s\t%s\t\t%s\t\t%lf\n", p -> ISBN, p -> name, p -> author, p -> price);
					++k;
				}
				else
					p = p -> next;
			}
			if(k == 0)
				printf("未查询到结果");
		}

		if (c == 'N')
		{
			printf("请输入书名：");
			scanf("%s", str);
			while(p != NULL)
			{
				strp = p -> name;
				int len1 = strlen(strp);
				int len2 = strlen(str);
				for (i = 0, j = 0; i < len1; ++i)
				{
					temp = i;
					if (str[i] == strp[j])
					{
						for (j = 1; j < len2; ++i, ++j)
						{
							if (str[i] != strp[j])
								break;
						}
						if (j == len2)
						{
							printf("%s\t%s\t\t%s\t\t%lf\n", p -> ISBN, p -> name, p -> author, p -> price);
							++k;
						}
					}
					if (k == 0)
						i = temp;
				}
				p = p -> next;
			}
			if (k == 0)
				printf("未查询到结果");
		}

		if (c == 'A')
		{
			printf("请输入作者：");
            scanf("%s", str);
            while(p != NULL)
            {
                if(strcmp(p -> author, str) == 0)
                {
                    printf("%s\t%s\t\t%s\t\t%lf\n", p -> ISBN, p -> name, p -> author, p -> price);
                    ++k;
                }
                else
                    p = p -> next;
            }
            if(k == 0)
                printf("未查询到结果");
		}
	}
}
