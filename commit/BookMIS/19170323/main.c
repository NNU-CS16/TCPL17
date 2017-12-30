 #include <stdio.h>
 #include "cmd.h"
 #include <string.h>
 #include <stdlib.h>

 int menu()
{
	printf("<<<<<<<<<<<<<<<<.>>>>>>>>>>>>>>>\n");
	printf("===欢迎登录图书信息管理系统===\n");
	printf("====   S->查询图书信息    ====\n");
	printf("====   U->修改图书条目    ====\n");
	printf("====   I->添加图书条目    ====\n");
	printf("====   D->删除图书条目    ====\n");
	printf("====   P->显示图书条目    ====\n");
	printf("====   T->显示统计信息    ====\n");
	printf("====   Q->退出系统        ====\n");
	printf("********************************\n");
	printf("吾王剑之所指，吾等心之所向：\n");
	return 0;
}

 int errcmd()
{
	printf("您已剑指偏锋!\n");
	return -1;
}

 int main()
{
	Book *head = loadbook();
	if (head->price < 0.01)
		head = NULL;
	do
	{
		menu();
		char cmd;
		scanf(" %c", &cmd);
		if ( cmd == 'q' )
		{
			save(head);
				break;
		}
		
		switch(cmd)
		{
			case 'i':
				printf("请输入图书信息：\n");
				head = insert(head);
				break;
			
			case 's':
				search(head);
				break;

			case 'p':
				output(head);
				break;
			
			case 'u':
				update(head);
			break;

			case 'd':
				head = delete(head);
			break;
		
			case 't':
				tongji(head);
			break;
		
			default : errcmd();
		}
	}while(1);
	return 0;
}			
