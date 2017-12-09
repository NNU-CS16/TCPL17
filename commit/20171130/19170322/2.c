    #include <stdio.h>
    #include <stdlib.h>
    
    struct Node
    {
	int val;
	struct Node* next;
    };

    struct Node* insert(struct Node* head, int val)
    {
        struct Node* shift = (struct Node*)malloc(sizeof(struct Node));
	shift -> next = head;
	shift -> val = val;
	head = shift;
	return head;
    }


    struct Node* construct(int arr[], int size)
    {
        struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	head -> val = arr[0];
	head -> next = NULL;
	struct Node* shift = (struct Node*)malloc(sizeof(struct Node));
	shift = head;
	for(int i = 0; i <= size - 2; i++)
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
        int arr[5] = {1, 2, 3, 4, 5};
	int i;
	struct Node* temp = construct(arr, 5);
	struct Node* temp1 = insert(temp, 0);
	while(temp1 -> next != NULL)
	{
	    printf("%d ", temp1 -> val);
	    temp1 = temp1 -> next;
	}
        printf("%d\n", temp1 -> val);
	return 0;    
    }
