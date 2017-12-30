#include "head.h"

void search()
{
        printf("\n");
        printf("请选择您所要查询的方式:\n\n");
        printf("<k>关键字查询..........keyword\n\n<w>作者查询.............writer\n\n<n>ISBN查询...............ISBN\n\n<q>退出...................quit\n\n");
        printf("(查询菜单)输入命令:");
        char command;
        scanf("%c",&command);
        while(command!='q')
        {
                if(command=='k')
                        keywordsearch();
                if(command=='w')
                        writersearch();
                if(command=='n')
                        ISBNsearch();
                if(command=='\n')
                {
                        scanf("%c",&command);
                        continue;
                }                
                printf("\n");
                printf("(查询菜单)输入命令:");
                scanf("%c",&command);
        }
}


