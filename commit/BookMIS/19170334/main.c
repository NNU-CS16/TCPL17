#include "head.h"
#include "interactive_interface.h"

int main()
{
	interactive_interface();          //交互界面
	int choice;
	scanf("%d", &choice);
	switch(choice)
	{
		case 0: break;
		case 1: seek(); getchar(); break;   //查询图书条目
		case 2: add();         //添加图书条目
			getchar();
			break;
		case 3: revise(); getchar(); break; //修改图书条目
		case 4: del(); getchar(); break; //删除图书条目
		case 5: show(); getchar(); break;   //显示图书条目(按书名字母序显示)
		case 6: count(); getchar(); break;  //统计图书信息
		default: printf("您的输入有误，请重新输入!"); getchar(); break;
	}
	return 0;
}
