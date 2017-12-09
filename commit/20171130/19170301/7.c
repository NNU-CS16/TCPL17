 #include <stdio.h>
 #include <stdlib.h>
 struct Node
 {
    int val;
    struct Node *next;
 };
 struct Node* construct (int arr[], int size);
 struct Node* reverse (struct Node* head);
 int main ()
 {
    int arr[5] = {1,2,3,4,5};
    struct Node *p = construct (arr, 5);
    struct Node *head = reverse (p);
    while (head != NULL)
    {
        printf ("%d ", head -> val);  
        head = head -> next;
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
 struct Node* reverse (struct Node* head)
 {
    struct Node* p, *p1, *p2;
    p2 = NULL;  
    p = head;  
    p1 = p -> next;  
    while(p1 != NULL)  
    {          
        p2 = p1->next;  
        p1 -> next = p;  
        p = p1;                                                           
        p1 = p2;      
    }     
    head -> next = NULL;  
    head = p;         
    return head;  
 }
