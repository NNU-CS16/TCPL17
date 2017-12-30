    /*此函数用于显示书本信息*/
    #include "head.h"
    void ShowBook(Book *head)
    {
        printf ("Book                          Writer              IBSN           price\n");
        Book* p = head;
        while(p != NULL)
        {
            printf ("%-30s%-20s%-15s%-4.2lf\n", p->name, p->writer, p->IBSN, p->price);
            p = p->next;
        }
    }
