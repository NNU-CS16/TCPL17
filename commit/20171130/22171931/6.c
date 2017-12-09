    #include <stdio.h>

#include <stdlib.h>

struct Node* delete(struct Node* head, int val);

struct Node* delete1(struct Node* head, int val);

struct Node

{

        int val;

	    struct Node* next;

};

int main()

{

     struct Node *p1, *p2, *p3, *p4;

         p1 = (struct Node *)malloc(sizeof(struct Node));p1->val=103;

	     p2 = (struct Node *)malloc(sizeof(struct Node));p2->val=105;

	         p3 = (struct Node *)malloc(sizeof(struct Node));p3->val=107;

		     p4 = (struct Node *)malloc(sizeof(struct Node));p4->val=105;

		         p1 -> next = p2; p2 -> next = p3; p3 -> next = p4; p4 -> next = NULL;



			     struct Node *head=p1;

			         int val;

				     scanf("%d", &val);

				         struct Node *j;

					     j = delete(head ,val);

					         while(j != NULL)

						         {

							             printf("%d\n",  j->val);

								             j = j -> next;

									         }

						     return 0;

}

struct Node* delete1(struct Node* head,int val)

{   

        struct Node *p = head;

	    struct Node *prev = NULL;

	        while (p!=NULL)

		        {

				if(p -> val==val)

				                break;

				        prev = p; 

					        p = p -> next;

						    }

		    if (p == NULL)

			        return NULL;

		        if (p == head)

			            head = head -> next;

			    else 

				        prev -> next = p -> next;

			        free(p);

				    return head;

}

struct Node* delete(struct Node* head, int val)

{

        struct Node *q=head;

	    while (q != NULL)

		    {

			    q = delete1(head,val);

			        }

	        return head;

}
