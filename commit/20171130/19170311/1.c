#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    int val;
    struct Node *next;
};
struct Node* construct(int arr[], int size);
void output(struct Node *head);
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int j = 0; j < size; j++)
        scanf("%d", &arr[j]);
    struct Node *head = construct(arr, size);
    output(head);
    return 0;
}
struct Node* construct(int arr[], int size)
{
    struct Node *p[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = (struct Node *)malloc(sizeof(struct Node)); p[i]->val = arr[i];
    }
    for (int i = 0; i < size - 1; i++)
        p[i]->next = p[i + 1];
    p[size - 1]->next = NULL;
    return p[0];
}
void output(struct Node *head)
{
    struct Node *p;
    p = head;
    while(p != NULL)
    {
          printf("%d\n", p->val);
          p = p->next;
    }
}

