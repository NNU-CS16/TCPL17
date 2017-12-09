#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* insert(struct Node* head, int val)
{
    struct Node* temp = (struct Node* )malloc(sizeof(struct Node));
    temp -> val = val;
    temp -> next = head;
    return temp;
}
int main()
{
    int i;
    struct Node* head = (struct Node* )malloc(sizeof(struct Node));
    struct Node* shift = head;
    shift -> val = 0;
    shift -> next = NULL;
    for (i = 1; i < 10; i++)
    {
	shift -> next = (struct Node* )malloc(sizeof(struct Node));
	shift = shift -> next;
	shift -> val = i;
    }
    shift -> next = NULL;
    shift = insert(head, 10);
    return 0;
}
