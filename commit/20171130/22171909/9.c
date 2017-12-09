 #include <stdio.h>
 #include <stdlib.h>
 
 struct Node
 {
    int val;
    struct Node* next;
 };

 void clear(struct Node* head)
 {
    struct Node *a;
    while (head != NULL)
    {
        a = head;
        head = head -> next;
        free(a);
    }
    if (head == NULL)
        printf("NULL");
 }

 int main()
 {
    struct Node *a, *b, *c;
    a = (struct Node *)malloc(sizeof(struct Node));
    a->val=103;
    b = (struct Node *)malloc(sizeof(struct Node));
    b->val=105;
    c = (struct Node *)malloc(sizeof(struct Node));
    c->val=107;
    a -> next = b; 
    b -> next = c;
    c -> next =NULL;
    struct Node *head = a;
    clear(head);
    return 0;
 }	
