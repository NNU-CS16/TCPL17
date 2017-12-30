#include "head.h"

void delete()
{
        struct book *p=creat();
        struct book *f=p;
        int isbn;
        int command=1;
        while(command)
        {
                printf("\n");
                printf("请输入您想要删除图书的ISBN值:");
                scanf("%d",&isbn);
                struct book *prev=NULL;
                printf("\n");
                while(p!=NULL)
                {
                        if(p->ISBN==isbn)
                                break;
                        prev=p;p=p->next;
                }
                if(p==NULL)
                        printf("没有找到您想要删除的图书!\n\n");
                if(p==f)
                {
                        f=f->next;
                        printf("删除成功!\n\n");
                }
                else
                {
                prev->next=p->next;
                printf("删除成功!\n\n");
                }
                printf("<1>继续删除  <0>退出 \n请选择 :");
                scanf("%d",&command);
        }
        FILE *fp;
        if((fp=fopen("book.csv","w"))==NULL)
        {
                printf("can't open!");
                exit(1);
        }
        while(f!=NULL)
        {
                fprintf(fp,"%-30s%-20s\t%d\t%lf\n",f->name,f->writer,f->ISBN,f->price);
                f=f->next;
        }
        fclose(fp);
}




