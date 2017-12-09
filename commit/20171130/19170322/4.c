    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
	struct Node* next;
    };
    struct Node* insert(struct Node* head, int val)
    {
        struct Node* shift = head;
	while (shift -> next != NULL && shift -> next -> val < val)
	{
	    shift = shift -> next;
	    if( shift -> next == NULL)
	    {
	        shift -> next = (struct Node*)malloc(sizeof(struct Node));
		shift = shift -> next;
		shift -> val = val;
		shift -> next = NULL;
	    }
	    else
	    {
	        struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
		temp -> val = val;
		temp -> next = shift -> next;
		shift -> next = temp;
	    }
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
        int arr[4] = {0, 1, 2, 4};
	struct Node* temp = construct(arr, 4);
	temp = insert(temp, 3);
	while(temp -> next != NULL)
	{
	    printf("%d ", temp -> val);
	    temp = temp -> next;
	}
        printf("%d\n", temp -> val);
	return 0;
    }
