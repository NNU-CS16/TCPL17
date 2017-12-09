 #include <stdio.h>
 #include <stdlib.h>
 struct Node
 {
    int val;
    struct Node *next;
 };
 struct Node *merge ( struct Node *head1, struct Node *head2 );
 int main ()
 {
    int a[4], b[4];
    int i;    
    for (i = 0; i < 4; i++)
        scanf ("%d", &a[i]);
    for (i = 0; i < 4; i++)
        scanf ("%d", &b[i]);
    struct Node *head1, *head2;  
    head1 = (struct Node*)malloc(sizeof(struct Node));  
    head2 = (struct Node*)malloc(sizeof(struct Node));    
    head1 -> val = a[0];
    head2 -> val = b[0];       
    struct Node *p, *q;  
    p = head1;  
    q = head2;
    for (i = 1; i < 4; i++)  
    {  
        p -> next = (struct Node*)malloc(sizeof(struct Node));
        p = p -> next;
        p -> val = a[i];
        p -> next = NULL;      
    }
    for (i = 1; i < 4; i++)
    {
        q -> next = (struct Node*)malloc(sizeof(struct Node));
        q = q -> next;
        q -> val = b[i];
        q -> next = NULL;      
    }
    struct Node* head = merge (head1, head2);
    while (head != NULL)
    {
        printf ("%d ", head -> val);
        head = head -> next;
    }
    printf ("\n");
    return 0;
 }
 struct Node *merge ( struct Node *head1, struct Node *head2 )
 {    
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;
    struct Node* head = NULL;
    if (head1 -> val < head2 -> val)
    {
        head = head1;
        head -> next = merge (head1 -> next, head2);       
    }
    else
    {
        head = head2;
        head -> next = merge(head1, head2 -> next);
    }
    return head;
 } 
