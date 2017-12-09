    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
	struct Node* next;
    };
    struct Node* construct(int arr[], int size)
    {
        struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	head -> val = arr[0];
	head -> next = NULL;
	struct Node* shift = head;
	for(int i = 0; i <= size - 2; i++)
	{
	    shift -> next = (struct Node*)malloc(sizeof(struct Node));
	    shift = shift -> next;
	    shift -> val = arr[i + 1];
	    shift -> next = NULL;
	}
	return head;    
    }
    struct Node* instert(struct Node* head, int val)
    {
        struct Node* shift = head;
	while(shift -> next != NULL)
	    shift = shift -> next;
	shift -> next = (struct Node*)malloc(sizeof(struct Node));
	shift = shift -> next;
	shift -> val = val;
	shift -> next = NULL;
	return head;
    }
    int main()
    {
        int arr[4] = {0, 1, 2, 3};
	struct Node* temp = construct(arr, 4);
	temp = instert(temp, 4);
	while(temp -> next != NULL)
	{
	    printf("%d ", temp -> val);
	    temp = temp -> next;
	}
        printf("%d\n", temp -> val);
	return 0;
    }
