  #include "sadstory.h"

  struct book* create()
  {
        FILE *fp;
        char line[200];
        char *pstr;

        if((fp = fopen("Book.csv","r")) == NULL)
        {
                printf("Cannot open thr file!\n");
                exit(1);
        }

        struct book *head;
        struct book *p1;
        head = (struct book *) malloc(sizeof(struct book));
        p1 = head;

        while(fgets(line, 200, fp) != NULL)
        {
                pstr = strtok (line, ","); 
                strcpy( p1->name, pstr );
             
			/*	while(pstr)
				{*/
                        pstr = strtok(NULL, ",");    
                        strcpy( p1->author, pstr ); 
                        pstr = strtok(NULL, ",");
                        strcpy( p1->isbn, pstr );
                        pstr = strtok(NULL, ",");
						sscanf(pstr, "%lf", &p1->price);
						pstr = strtok(NULL, ",");
						sscanf(pstr, "%d", &p1->num);
						p1->next = NULL;
			//	}
                p1->next = (struct book *) malloc(sizeof(struct book)); 
				p1 = p1 -> next;
		}
	fclose(fp);
	return head;

  }
