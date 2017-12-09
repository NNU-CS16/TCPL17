    #include <stdio.h>
    #include <stdilb.h>
    struct Node
    {
        int val;
	struct Node* next;    
    };
    void clear(struct Node* head)
    {
        struct Node *shift, *shift1;
        shift = head -> next;  
        while(shift != NULL)
	{  
	    shift1 = shift -> next;
	    free(shift);  
	    shift = shift1;
	}  
	head -> next = NULL;
    }
    struct Node* construct(int arr[], int size)
    {
        struct Node* head = (struct Node*)malloc(sizeof (struct Node));
        head -> val = arr[0];
	head -> next = NULL;
	struct Node* shift = head;
	int i = 0;
	for(i = 0; i <= size - 2; i++)
	{
	    shift -> next = (struct Node*)malloc(sizeof(struct Node));
	    shift = shift -> next;
	    shift -> val = arr[i + 1];
	    shift -> next = NULL;	
	}
	return head;    
    }

    int main()
    {
        int arr[4] = {0, 1, 2, 3};
	struct Node* head = construct(arr, 4);
	clear(head);
	return 0;
    }
