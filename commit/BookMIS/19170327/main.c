#include "communal.h"
int main()
{
	printf("		*****欢迎进入*****\n");
	printf("******************图书馆管理系统********************\n");
	printf("	*************************************\n");			
	printf("|a-添加图书				   m-删除图书|\n");
	printf("|d-图书列表				   s-图书统计|\n");	
	printf("|q-查询图书				   x-修改图书|\n");
	printf("|t-退出系统					     |\n");
	printf("******************************************************\n");
	printf("	*************************************\n");
	printf("请输入您需要的服务编号：");
	
	char command;
	scanf("%c",&command);
	while(command != 't')
	{
		if(command == 'a')
			add();
		if(command == 'm')
			delete();
		if(command == 'd')
			display();
		if(command == 's')
			stat();
		if(command == 'q')
			query();
		if(command == 'x')
			amend();
		if(command == '\n')
		{
			scanf("%c",&command);
                        continue;
		}

		printf("(主菜单)输入命令：\n");
		scanf("%c",&command);
	}
	return 0;
}

		
