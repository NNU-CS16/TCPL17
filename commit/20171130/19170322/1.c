    #include <stdio.h>
    #include <stdlib.h>
    struct Node* construct(int arr[], int size);
    struct Node
    {
        int val;
	struct Node* next;
    };
    int main()
    {
        int a[5] = { 0, 1, 2, 3, 4 };
	struct Node* temp = construct(a, 5);
	while(temp -> next != NULL)
	{
	    printf("%d ", temp -> val);
	    temp = temp -> next;
	}
        printf("%d\n", temp -> val);
        return 0;
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
