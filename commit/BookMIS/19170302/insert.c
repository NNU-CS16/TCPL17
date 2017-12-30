#include "head.h"

void insert()
{
        struct book *p= creat();
        struct book *f=p;
        int isbn;
        int command=1;
        while(command)
        {
                struct book *prev=NULL;
                struct book *newp=(struct book *)malloc(sizeof(struct book));
                printf("\n");
                printf("请输入您所要添加图书的ISBN值:");
                scanf("%d",&newp->ISBN);
                while(p!=NULL)
                {
                        if(p->ISBN>newp->ISBN)
                                break;
                        prev=p;p=p->next;
                }
                newp->next=p;
                if(p==f)
                        f=newp;
                else
                prev->next=newp;
                printf("请分别输入您所要添加图书的名字，作者，ISBN，价格:\n\n");
                scanf("%s%s%d%lf",newp->name,newp->writer,&newp->ISBN,&newp->price);
                printf("\n");
                printf("添加成功!\n\n");
                printf("<1>继续添加  <0>退出  请选择:");
                scanf("%d",&command);
        }
        FILE *fp;
        if((fp=fopen("book.csv","w"))==NULL)
        {
                printf("can't open");
                exit(1);
        }
        while(f!=NULL)
        {
                fprintf(fp,"%s\t%s\t%d\t%lf\n",f->name,f->writer,f->ISBN,f->price);
                f=f->next;
        }
        fclose(fp);
}

            




