    //此函数用于统计
    #include"head.h"
    void Statistics(Book *head)
    {
        /*寻找书本数n价格最高的书本High最低的书本Low*/
        Book *p = head;
        int n = 0;
        double High = p->price,Low = p->price;
        char Hbook[50],Lbook[50];
        while (p != NULL)
        {
            n++;
            if (High <= p->price)
            {
                High = p->price;
                strcpy(Hbook,p->name);
            }
             if (Low >= p->price)
            {
                Low = p->price;
                strcpy(Lbook,p->name);
            }
            p = p->next;
        }
        printf ("书本数目：%d\n",n);
        printf ("最高价书本：%s\n",Hbook);
        printf ("最低价书本：%s\n",Lbook);
        /*寻找著作最多的作者a*/
        Book *p1 = head, *p2 = head;
        int count , temp = 0;
        char a[20];
        while (p1 != NULL)
        {
            count = 0;
            while (p2 != NULL)
            {
                if (strcmp(p1->writer, p2->writer) == 0)
                    count++;
                p2 = p2->next;
            }
            if (count > temp)
            {
                temp = count;
                strcpy(a, p1->writer);
            }

            p1 = p1->next;
            p2 = p1;

        }
        printf("拥有书目最多的作者：%s\n",a);
        /*统计书目最多的地址*/
        Book *p3 = head;
        Book *p4;
        int m = 0;
        while (p3 != NULL)
        {
            m++;
            p4 = head;
            while (p4 != p3)
            {
                if (strcmp(p3->writer, p4->writer) == 0)
                {
                    m = m - 1;
                    break;
                }
                p4 = p4->next;
            }
            p3 = p3->next;
        }
        printf("作者数目：%d\n",m);
    }
