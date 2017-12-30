#include "head.h"

void ISBNsearch()
{
        printf("\n");
        printf("请输入您所要查找的书的ISBN值:");
        int isbn;
        scanf("%d",&isbn);
        struct book *p=creat();
        printf("\n");
        while(p!=NULL)
        {
                while(p->ISBN!=isbn&&p!=NULL)
                {
                        p=p->next;
                }
                if(p->ISBN==isbn)
                {
                        printf("%s %s %d %lf\n",p->name,p->writer,p->ISBN,p->price);
                        printf("\n");
                        break;
                }
                else
                {
                        printf("没有找到相应图书!\n\n");
                        break;
                }
        }
}



