#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "start.h"
void menu()
	{
		printf("Welcome to use this BookMIS(beta).\n");
		printf("==============BookMIS================\n");
		printf("(s) ======search the book=========\n");
		printf("(a) ========add the book==========\n");
		printf("(d) ======delete the book=========\n");
		printf("(u) ======update the book=========\n");
		printf("(l) =====list all the book========\n");
		printf("(r) ===report the information=====\n");
		printf("(q) =======quit the system========\n");
		printf("please enter the command: ");
	}
	int errCmd()
    {
		printf(" error command!\n");
		return -1;
	}
	int main()
	{
		struct book *head;
		head = read();
    	char cmd;
		do{
		      menu();
			  cmd = getchar();
			  getchar();
			  if (cmd == 'q')
                  break;
			  switch (cmd)
			  {
				  case 's':
                                          printf("input what you want to search\n");
					  search(head);
                                          break;
                                  case 'a':
                                          printf("input what you want to add\n");
                                 	  add(head);
                                	  break;
                                  case 'd':
                                    	  printf("input what you want to delete\n");
                                 	  head = deleted(head);
                                       	  break;
                                  case 'u':
                                 	  printf("input what you want to update\n");
                                  	  head = update(head);
                                 	  break;
                                  case 'l':
                                	  printf("list all the book\n");
                                 	  listall(head);
                                 	  break;
                                  case 'r':
                                 	  printf("report the information\n");
                                 	  report(head);
                                	  break;

				  default:errCmd();
                             }
                       }while (1);

                docsv(head);
                printf("ok\n");

        return 0;

	}
