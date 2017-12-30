#include<stdio.h> 
#include"system.h"
book* read()
{
        book* head = (book*)malloc(sizeof(book));
	    char str[50];
	        char arr[20];
		    int num;
		        double j; 
			    book* q = head;
			        book* p = head;
				    p -> next = NULL;
				        FILE* r = fopen ("book.csv","r");
					    if (r == NULL)
						    {
							        printf ("打开文件失败");
								        exit (1);
									    }
					        while (fscanf (r,"%s %s %d %lf", str, arr, &num, &j) != EOF)
						        {               
							            q = (book*)malloc(sizeof(book));
								            strcpy(q -> name, str);
									            strcpy(q -> writer, arr);
										            q -> ISBN = num;
											            q -> price = j;
												            p -> next = q;
													            p = q;            
														        }
						    p -> next = NULL;
						        fclose (r);
							    return head -> next;
							     }
