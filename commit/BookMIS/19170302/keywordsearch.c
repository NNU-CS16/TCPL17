#include "head.h"

void keywordsearch()
{
        printf("\n");
        printf("请输入您所要查找的图书书名的关键字:");
        char arr[50];
        scanf("%s",arr);
        struct book *p1=creat();
        char *p2=NULL;
        printf("\n");
        while(p1!=NULL)
        {
                p2=strstr(p1->name,arr);
                if(p2!=NULL)
                {
                printf("%-30s%-20s\t%d\t%lf\n",p1->name,p1->writer,p1->ISBN,p1->price);
                printf("\n");
                }
                p1=p1->next;
        }
}

