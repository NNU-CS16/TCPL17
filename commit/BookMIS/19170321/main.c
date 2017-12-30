    /*此函数为入口*/
    #include "head.h"
    int main()
    {
        Book *head = NULL;
        int t;
        int choice;
        head = LoadChain (head, "BookInformation.csv");
        if (head == NULL) printf("空\n");
        while(1)
        {
            choice = Menu();
            if (choice == 0)
                break;
            switch(choice)
            {
                case 1: ShowBook(head);break;
                case 2: head = Insert(head);break;
                case 3: Search(head);break;
                case 4: head = Delete(head);break;
                case 5: Update(head);break;
                case 6: Statistics(head);break;
                case 7: SaveAs(head, "BookInformation.csv");break;
            }
        }
        return 0;
    }
    int Menu()
    {
        int choice;
        printf ("<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>\n");
        printf ("<*>  退出（0)                           <*>\n");
        printf ("<*>  显示（1）                          <*>\n");
        printf ("<*>  增加（2）                          <*>\n");
        printf ("<*>  查询（3）                          <*>\n");
        printf ("<*>  删除（4）                          <*>\n");
        printf ("<*>  修改（5）                          <*>\n");
        printf ("<*>  统计（6）                          <*>\n");
        printf ("<*>  保存（7）                          <*>\n");
        printf ("<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>\n");
        printf ("你的选择：");
        scanf ("%d", &choice);
        return choice;
    }
