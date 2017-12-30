#include "head.h"

void update()
{
        struct book *p=creat();
        struct book *f=p;
        printf("\n");
        printf("请输入您想要修改图书的ISBN值:");
        int isbn;
        scanf("%d",&isbn);
        printf("\n");
        while(p!=NULL)
        {
                if(p->ISBN==isbn)
                {
                        printf("请选择您想要修改的内容:\n\n<1>书名............name\n\n<2>作者..........writer\n\n<3>价格...........price\n\n输入命令:");
                        int command;
                        scanf("%d",&command);
                        while(command)
                        {
                        if(command==1)
                        {
                                printf("请输入新的书名:");
                                scanf("%s",p->name);
                                printf("\n");
                                printf("修改成功!\n");
                                      
                        }
                        if(command==2)
                        {
                                printf("请输入新的作者名:");
                                scanf("%s",p->writer);
                                printf("\n");
                                printf("修改成功!\n");
                               
                        }
                        if(command==3)
                        {
                                printf("请输入新的价格:");
                                scanf("%lf",&p->price);
                                printf("\n");
                                printf("修改成功!\n");
                 
                        }
                        printf("\n");
                        printf("<1>继续修改书名 <2>继续修改作者名 <3>继续修改价格 <0>退出 请选择:");
                        scanf("%d",&command);
                        printf("\n");
                        }
                        if(command==0)
                                break;
                }
                else
                p=p->next;
        }
        FILE *fp;
        if((fp=fopen("book.csv","w"))==NULL)
        {
                printf("can't open!");
                exit(1);
        }
        while(f!=NULL)
        {
                fprintf(fp,"%s\t%s\t%d\t%lf\n",f->name,f->writer,f->ISBN,f->price);
                f=f->next;
        }
        fclose(fp);
}
