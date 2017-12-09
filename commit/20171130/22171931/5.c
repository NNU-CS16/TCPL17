    #include <stdio.h>

#include <stdlib.h>

struct Node* delete(struct Node* head, struct Node* target);

struct Node

{

        int val;

	    struct Node* next;

};

int main()

{

         struct Node *p1, *p2, *p3;

	     p1 = (struct Node *)malloc(sizeof(struct Node));p1->val=103;

	         p2 = (struct Node *)malloc(sizeof(struct Node));p2->val=105;

		     p3 = (struct Node *)malloc(sizeof(struct Node));p3->val=107;

		         p1 -> next = p2; p2 -> next = p3; p3 -> next =NULL;



			     struct Node *head=p1;

			         struct Node *target = p2;

				     struct Node *j;

				         j = delete(head ,target);

					     while(j != NULL)

						     {

							         printf("%d\n",  j->val);

								         j = j -> next;

									     }

					         return 0;

}

struct Node* delete(struct Node* head,struct Node* target)

{

        struct Node *prev,*p;

	    prev = NULL;

	        p = head;

		    while (p != NULL)

			    {

				    if (p -> val == target -> val)

					            break;

				            prev = p;

					            p = p -> next;

						        }

		        if (p == head)

			        {

				            head = head -> next;

					        }

			    if (p == NULL)

				        return NULL;

			        else

				        prev ->next = p -> next;

				    free(p);

				        return head;

}
