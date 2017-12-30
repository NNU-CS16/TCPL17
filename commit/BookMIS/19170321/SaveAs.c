    /*此函数用于保存对图书记录的变动*/
    #include "head.h"
    void SaveAs (Book *head,char *fileName)
    {
        FILE *fp;
        Book *p = head;
        fp = fopen(fileName, "w");
        if(fp == NULL)
            exit(1);
        while(p != NULL)
        {
            fprintf(fp, "%s\t", p->name);
            fprintf(fp, "%s\t", p->writer);
            fprintf(fp, "%s\t", p->IBSN);
            fprintf(fp, "%.2lf\n", p->price);
            p = p->next;
        }

        fclose(fp);
    }
