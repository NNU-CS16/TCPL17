  #include "sadstory.h"


  void revise(struct book *head)
  {
        struct  book *p;
        p = head;
        char name[50];
        char author[20];
        char isbn[13];
        double price;
        scanf("%s", isbn);
        while(p != NULL)
        {
                int t = strcmp(p->isbn, isbn);
                if(!t)
                {
                        printf("请依次输入书名、作者、价格:\n");
                        fgets(name, sizeof(name), stdin);
			fgets(author, sizeof(author), stdin);
                        del_str_line(name);
                        del_str_line(author);
                        strcpy(p->name, name);
                        strcpy(p->author, name);
                        scanf("%lf", &p->price);
                }
                else    p = p->next;
        }
        if(p == NULL)   printf("Not found!\n");
  }
