    //此函数用于删除图书条例
    #include"head.h"
    Book *Delete(Book * head)
    {
        Search(head);
        char a[8];
        int i = 0;
        printf ("输入待删除图书条目的IBSN:");
        scanf ("%s",a);
        Book *p = head;
        Book *prev = NULL  ;
        while (p != NULL)
        {
            if (strcmp(p->IBSN,a) == 0)
            {
                i = 1;
                if (p != head)
                {
                    prev->next = p->next;
                    free(p);
                    break;
                }
                if (p == head)
                {
                    free(p);
                    head = head->next;
                    break;
                }
            }
                prev = p;
                p = p->next;
        }
        if (i != 1)
            printf ("没有此书");
        return head;
    }
