    #include"head.h"
    //此函数用于查询
    void Search(Book *head)
    {
        Book *p = head;
        int n = 0;
        printf ("按书名查询（1）：\n");
        printf ("按作者查询（2）：\n");
        printf ("按IBSN查询（3）：\n");
        scanf ("%d",&n);
        switch (n)
        {
            case 1:
            {
                printf ("请输入书名：");
                char a[50];
                int i = 0;
                scanf ("%s",a);
                while (p != NULL)
                {
                    if  (strcmp(a,p->name) == 0)
                    {
                        printf ("%s\t%s\t%s\t%0.2lf\n", p->name, p->writer, p->IBSN,p->price);
                        i = 1;
                    }
                    p = p->next;
                }
                if (i != 1)
                    printf ("不存在\n");
                break;
            }
            case 2:
            {
                printf ("请输入作者：");
                char a[50];
                int i = 0;
                scanf ("%s",a);
                while (p != NULL)
                {
                    if  (strcmp(a,p->writer) == 0)
                    {
                        printf ("%s\t%s\t%s\t%0.2lf\n", p->name, p->writer, p->IBSN
,p->price);
                        i = 1;
                    }
                    p = p->next;
                }
                if (i != 1)
                    printf ("不存在\n");
                break;
            }
            case 3:
            {
                printf ("请输入IBSN：");
                char a[8];
                int i = 0;
                scanf ("%s",a);
                while (p != NULL)
                {
                    if  (strcmp(a,p->IBSN) == 0)
                    {
                        printf ("%s\t%s\t%s\t%0.2lf\n", p->name, p->writer, p->IBSN
,p->price);
                        i = 1;
                    }
                    p = p->next;
                }
                if (i != 1)
                    printf ("不存在\n");
                break;
            }
        }
    }
