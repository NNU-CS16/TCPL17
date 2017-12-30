    #include "大礼包.h"
    int main()
    {
	int choice1, choice2;
        printf("\t\t\t ^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^ \n");
	printf("\t\t\t| * - * - * -图书管理系统 * - * - * |\n");
	printf("\t\t\t*  [1]   查询图书条目                 *\n");
	printf("\t\t\t*  [2]   添加图书条目                 *\n");
	printf("\t\t\t*  [3]   修改图书条目                 *\n");
	printf("\t\t\t*  [4]   删除图书条目                 *\n");
	printf("\t\t\t*  [5]   显示图书条目                 *\n");
	printf("\t\t\t*  [6]   图书信息统计                 *\n");
	printf("\t\t\t*  [7]     退出系统                 *\n");
        printf("\t\t\t^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^ \n");
        printf("\n");
        printf("请选择你的操作 ：");
	scanf("%d", &choice1);
	if(choice1 == 1)
	    chaxun();
	if(choice1 == 2)
	    tianjia();
	if(choice1 == 3)
	    xiugai();
	if(choice1 == 4)
	    shanchu();
	if(choice1 == 5)
	    xianshi();
	if(choice1 == 6)
	    tongji();
	printf("谢谢使用，再见。");
        return 0;
    }
