    #include"head.h"
    //此函数用于修改图书条目
    void Update(Book *head)
    {
        Book *p = head;
        Search(head);
        printf ("输入待修改图书条目IBSN：");
        char a[8];
        scanf ("%s",a);
        while (p != NULL)
        {
            if (strcmp(p->IBSN,a) == 0)
            {
                double d;
                printf ("输入该书书名：");
                scanf ("%s",p->name);
                printf ("输入该书作者：");
                scanf ("%s",p->writer);
                printf ("输入该书价格：");
                scanf ("%lf",&p->price);
            }
            p = p->next;
        }
    }
