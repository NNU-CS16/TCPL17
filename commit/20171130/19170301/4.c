 #include <stdio.h>
 #include <stdlib.h>
 struct Node
 {
    int date;
    struct Node *next;
 };
 struct Node* construct (int arr[], int size);
 struct Node* insert (struct Node* head, int val);
 int main ()
 {
    int val;
    int arr[4] = {1, 3, 56, 78};
    scanf ("%d", &val);
    struct Node *p = construct (arr, 4);
    struct Node *head = insert (p, val);
    while (head != NULL)
    {
        printf ("%d ", head -> date);
        head = head -> next;
    }
    printf ("\n");
    return 0;
 }
 struct Node* construct (int arr[], int size)
 {
    struct Node *head, *p;   
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> date = arr[0];      
    p = head;   
    for (int i = 1; i < size; i++)
    {
        p -> next = (struct Node*)malloc(sizeof(struct Node));
        p = p -> next;
        p -> date = arr[i];
        p -> next = NULL;      
    }
    return head;
 }
 struct Node* insert (struct Node* head, int val)
 {
    struct Node *shift;
    shift = head;
    while (shift -> date < val && shift -> next != NULL)
        shift = shift -> next;
    if (shift -> date >= val)
    {
        struct Node *p;
        p = (struct Node*)malloc(sizeof(struct Node));
        p -> date = shift -> date;
        p -> next = shift -> next;
        shift -> date = val;
        shift -> next = p;
    }
    else    
    {
        shift -> next = (struct Node *)malloc(sizeof(struct Node));
        shift = shift -> next;
        shift -> date = val;
        shift -> next = NULL;
    }
    return head;
 }
        
