  #include "sadstory.h"


  void author_search(struct book *head, char *author)
  {
        struct book *p;
        int count = 0;
        p = head;
        while(p != NULL)
        {
                if(!(strcmp(p->author, author)))
                {
                        printf("%s\t%s\t%s\t%lf\t%d\n", p->name, p->author, p->isbn, p->price, p->num);
                        count++;
                }
                else
                        p = p->next;
        }
        if(!count)
                printf("Not found!\n");
  }

