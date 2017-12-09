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
    struct Node* head;
    scanf ("%d", &val);
    struct Node *p1, *p2, *p3;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1 -> date = 1;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2 -> date = 2;
    p3 = (struct Node *)malloc(sizeof(struct Node));
    p3 -> date = 3;
    p1 -> next = p2;
    p2 -> next = p3;
    p3 -> next = NULL;
    struct Node* p;        
    p = (struct Node *)malloc(sizeof(struct Node));
    p -> date = p1 -> date;
    p -> next = p2;
    head = insert (p1, val);
    head -> next = p;
    while (head != NULL)
    {
        printf ("%d ", head -> date);
        head = head -> next;
    }
    return 0;
 }
 struct Node* insert (struct Node* head, int val)
 {
    head -> date = val;
    head -> next = NULL;
    return head;
 }    
