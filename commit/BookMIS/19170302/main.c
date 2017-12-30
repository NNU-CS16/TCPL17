#include "head.h"

int main()
{
        printf("        欢迎来到我的图书馆！\n\n");
        printf("========图书馆管理系统菜单========\n\n");
        printf("<s>查询图书信息...............search\n\n<u>修改图书信息...............update\n\n<i>添加图书信息...............insert\n\n<d>删除图书信息...............delete\n\n<p>打印图书信息................print\n\n<r>图书信息统计...............report\n\n<q>退出系统.....................quit\n\n输入命令:");
        char command;
        scanf("%c",&command);
        while(command!='q')
        {
                if(command=='s')
                        search();
                if(command=='i')
                        insert();
                if(command=='d')
                        delete();
                if(command=='u')
                        update();
                if(command=='p')
                        print();
                if(command=='r')
                        report();
                if(command=='\n')
                {
                        scanf("%c",&command);
                        continue;
                }
                printf("\n");
                printf("(主菜单)输入命令:");
                scanf("%c",&command);
        }
        
        return 0;
}






