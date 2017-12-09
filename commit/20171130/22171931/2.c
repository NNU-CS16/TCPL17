    #include <stdio.h>

#include <stdlib.h>

struct Node* insert(struct Node* head, int val);

struct Node

{

        int val;

	    struct Node* next;

};

int main()

{

        struct Node *p1, *p2, *p3;

	    p1 = (struct Node *)malloc(sizeof(struct Node));p1 -> val=101;

	        p2 = (struct Node *)malloc(sizeof(struct Node));p2 -> val=102;

		    p3 = (struct Node *)malloc(sizeof(struct Node));p3 -> val=103;

		        p1 -> next = p2; p2 -> next = p3; p3 -> next = NULL;

			   

			    struct Node *head=p1;

			        int val = 107;

				    struct Node *j;

				        j = insert(head,val);

					    while(j != NULL)

						    {

							        printf("%X %d %X\n", j, j->val, j->next);

								        j = j -> next;

									    }

					        return 0;

}

struct Node* insert(struct Node* head, int val)

{

        struct Node *newp;

	    newp=(struct Node *)malloc(sizeof(struct Node));

	        newp -> val = val;

		    newp->next = head;

		        head = newp;

			    return head;

}


