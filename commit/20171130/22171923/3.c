#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* insert(struct Node* head, int val)
{
    struct Node* shift;
    shift = head;
    while (shift -> next != NULL) shift = shift -> next;
    shift -> next = (struct Node*)malloc(sizeof(struct Node));
    shift = shift -> next;
    shift -> val = val;
    shift -> next = NULL;
    return head;
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    head -> val = 1;
    head -> next = NULL;
    head = insert(head, 2);
    return 0;
}
