    /*此函数用于将书本信息导入内存的链表中*/
    #include "head.h"
    //head: 书本信息记录的链表头
    Book* LoadChain (Book *head, char *fileName)
    {
        Book *p = (Book*)malloc(sizeof(Book));
        Book *prev;
        head = p;
        FILE* fp;
        int i;
        fp = fopen(fileName, "r");
        if (fp == NULL)
        {
            printf("打开文件失败");
            exit(1);
        }
        while (fscanf (fp,"%s%s%s%lf", p->name, p->writer, p->IBSN, &p->price) != EOF)
        {
            p ->next = (Book*)malloc(sizeof(Book));
            prev = p;
            p = p->next;
        }
            prev->next = NULL;
            free(p);
        fclose(fp);
        return head;
    }
