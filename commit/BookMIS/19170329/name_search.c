  #include "sadstory.h"


  void name_search(struct book *head, char *name)   //1
  {
        struct book *p;
        p = head;
        int count = 0;
        while( p != NULL)
        {
                if((strstr(name, p->name)) != NULL)
                {
                        printf("%s\t%s\t%s\t%lf\t%d", p->name, p->author, p->isbn, p->price, p->num ); //2
                        count++;
                }
                else if(strstr(name, p->name ) == NULL)
                        p = p->next;
        }
        if(count == 0)
                        printf("Not found!\n");
  }

