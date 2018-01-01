   #include "sadstory.h"


   void isbn_search(struct book *head,char * isbn)
   {
        struct book *p;
        while(p != NULL)
        {
                if(!(strcmp(p->isbn ,isbn )))
                {
                        printf("%s\t%s\t%s\t%lf\t%d\n", p->name, p->author, p->isbn, p->price, p->num);
                        break;
                }
                else
                        p = p->next;
        }
        if(p == NULL)
                        printf("Not found!\n");
   }

