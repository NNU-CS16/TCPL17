    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
	struct Node* next;
    };
    struct Node* delete(struct Node* head, struct Node* target)
    {
        struct Node* shift = head;
	if(head != rarget)
	{   
            while (shift -> next != target)
	        shift = shift -> next;
	    shift -> next = target -> next;
	    free(target);
	    return head;
	}
	else
	{    
	    free(target);
	    return NULL;
	}
    }
