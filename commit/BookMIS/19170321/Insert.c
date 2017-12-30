    //此函数用于添加图书条目
    #include"head.h"
    Book *Insert(Book* head)
    {
        Book* p = (Book*)malloc(sizeof(Book));
        printf ("请输入书名：");
        scanf ("%s",p->name);
        printf ("请输入作者：");
        scanf ("%s",p->writer);
        printf ("请输入IBSN：");
        scanf ("%s",p->IBSN);
        printf ("请输入价格：");
        scanf ("%lf",&p->price);
        p->next = head;
        head = p;
        return head;
    }
