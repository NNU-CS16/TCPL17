 #include <stdio.h>
 #include <stdlib.h>
 struct Node
 {
    int val;
    struct Node *next;
 };
 struct Node* construct (int arr[], int size);
 struct Node* delete (struct Node* head, struct Node* target);
 int main ()
 {  
    int n;
    scanf ("%d", &n);
    int arr[20] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
    struct Node *p = construct (arr, 20);
    struct Node *target = (struct Node*)malloc(sizeof(struct Node));
    target -> val = n;
    target -> next = NULL;
    struct Node *head = delete (p, target);
    while (head != NULL)
    {
        printf ("%d ", head -> val);                                                                         
        head = head -> next;
    }
    printf ("\n");
    return 0;
 }
 struct Node* delete (struct Node* head, struct Node* target)
 {
    struct Node* p, *p1;   
    p = head;
    if (head -> val == target -> val)
    {            
        head = p -> next;
        free (p);
    }                      
    for (p = head, p1 = p -> next; p1 != NULL; p = p -> next, p1 = p ->next)
    {            
        if (p1 -> val == target -> val)
        {
            p -> next = p1 -> next;
            free (p1);
        }
    }
    return head;
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
