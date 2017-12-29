#include "head.h"

void writersearch()
{
        printf("\n");
        printf("请输入您所要查询的图书作者名字的关键字:");
        char str[20];
        scanf("%s",str);
        struct book *p1=creat();
        char *p2=NULL;
        printf("\n");
        while(p1!=NULL)
        {
                p2=strstr(p1->writer,str);
                if(p2!=NULL)
                {
                printf("%-30s%-20s\t%d\t%lf\n",p1->name,p1->writer,p1->ISBN,p1->price);
                printf("\n");
                }
                p1=p1->next;
        }
}

