 #include <stdio.h>
 #include <stdlib.h>
 struct Node
 {
    int val;
    struct Node *next;
 };
 void clear (struct Node* head);
 int main ()
 {
    int a[4];
    int i;    
    for (i = 0; i < 4; i++)
        scanf ("%d", &a[i]);    
    struct Node *head; 
    head = (struct Node*)malloc(sizeof(struct Node));                                   
    head -> val = a[0];                                        
    struct Node *p; 
    p = head; 
    for (i = 1; i < 5; i++)  
    {  
        p -> next = (struct Node*)malloc(sizeof(struct Node));
        p = p -> next;
        p -> val = a[i];
        p -> next = NULL;      
    }
    clear (head);
    return 0;
 }
 void clear (struct Node* head)
 {
    struct Node* p, *q;
    p = head;    
    while (p -> next != NULL)
    {
        q = p;
        p = p -> next;
        free (q);
    }  
    free (p);
 }

