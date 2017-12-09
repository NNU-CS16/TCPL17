 #include <stdio.h>
 #include <stdlib.h>
 struct Node
 {
    int val;
    struct Node *next;
 };
 struct Node* construct (int arr[], int size);
 int main ()
 {
    int size, i;
    scanf ("%d", &size);
    int arr[100];
    for (i = 0; i < size; i++)
        scanf ("%d", &arr[i]);
    struct Node *p = construct (arr, size);    
    while (p != NULL)
    {
        printf ("%d ", p -> val);  
        p = p -> next;
    }
    printf ("\n");
    return 0;
 }
 struct Node* construct (int arr[], int size)
 {
    struct Node *head, *p;   
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> val = arr[0];      
    p = head;   
    for (int i = 1; i < size; i++ )
    {
     	p -> next = (struct Node*)malloc(sizeof(struct Node));
	    p = p -> next;
	    p -> val = arr[i];
	    p -> next = NULL;	   
    }
    return head;

 }
