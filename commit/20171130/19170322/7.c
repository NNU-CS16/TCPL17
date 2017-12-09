    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
	struct Node* next;
    };
    struct Node* reservese(struct Node* head);
    struct Node* construct(int arr[], int size);
    int main()
    {
        int arr[4] = {0, 1, 2, 3};
	struct Node* head = construct(arr, 4);
	head = reservese(head);
	while(head -> next)
	{
	    printf("%d ", head -> val);
	    head = head -> next;
	}
	printf("%d\n", head -> val);
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
    struct Node* reservese(struct Node* head)
    {
        struct Node* shift, *shift1, *shift2;
	shift = head;
	shift1 = shift -> next;
	shift2 = NULL;
        while(shift1 != NULL)
	{
	    shift2 = shift1 -> next;
	    shift1 -> next = shift;
	    shift = shift1;
	    shift1 = shift2;
	}
	head -> next = NULL;
        head = shift;
	return head;
    }
