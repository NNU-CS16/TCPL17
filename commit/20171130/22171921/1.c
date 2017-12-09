#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* construct(int arr[], int size)
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head -> val = arr[0];
    head -> next = NULL;
    struct Node *shift = head;
    int tail = 1;
    while (tail < size)
    {
        shift -> next = (struct Node *)malloc(sizeof(struct Node));
        shift = shift -> next;
        shift -> val = arr[tail];
        ++tail;
        shift -> next = NULL;
    }
    return head;
}

int main()
{
    int arr[10] = {1, 4, 2, 5, 3, 6, 4, 7, 3, 10};
    struct Node *temp = construct(arr, 10);
    while (temp -> next != NULL)
    {
        printf("%d", temp -> val);
        temp = temp -> next;
    }
    printf("%d\n", temp -> val);
    return 0;
}

        
        
