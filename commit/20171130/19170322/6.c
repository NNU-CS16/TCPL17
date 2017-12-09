    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
	struct Node* next;
    };
    struct Node* delete(struct Node* head, int val)
    {
	struct Node* shift = head;
	struct Node* target;
        if (shift -> val == val)
	{
	    if (shift -> next != NULL)
		shift = shift -> next;
	    else
		return NULL;
	    head = shift;
	}
	while (shift -> next != NULL)
	{
	    while (shift -> next != NULL && shift -> next -> val != val)
		shift = shift -> next;
	    struct Node* temp = shift -> next;
	    shift -> next = shift -> next -> next;
	    free(temp);
	}
        return head;
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
        int arr[5] = {0, 1, 0, 1, 1};
	struct Node* temp = construct(arr, 5);
	temp = delete(temp, 1);
	while(temp -> next != NULL)
	{
	    printf("%d ", temp -> val);
	    temp = temp -> next;
	}
	printf("%d\n", temp -> val);
        return 0;
    }
