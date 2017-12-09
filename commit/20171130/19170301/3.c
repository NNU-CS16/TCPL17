 #include <stdio.h>
 #include <stdlib.h>
 struct Node
 {
    int date;
    struct Node* next;
 };
 struct Node* insert (struct Node* head, int val);
 int main()
 {
    int val;
    struct Node* last;
    scanf ("%d", &val);
    struct Node *p, *p1, *p2, *p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1 -> date = 1;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2 -> date = 2;
    p3 = (struct Node *)malloc(sizeof(struct Node));
    p3 -> date = 3;
    p1 -> next = p2;
    p2 -> next = p3;
    p3 -> next = NULL;       
    p = (struct Node *)malloc(sizeof(struct Node));
    p -> date = p1 -> date;
    p -> next = p2;
    last = insert (p1, val);    
    p3 -> next = last;
    while (p != NULL)
    {
        printf ("%d ", p -> date);
        p = p -> next;
    }
    return 0;
 }
 struct Node* insert (struct Node* head, int val)
 {
    head -> date = val;
    head -> next = NULL;
    return head;
 }    
