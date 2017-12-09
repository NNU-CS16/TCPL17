/*5.c_删除节点*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* construct(int arr[], int size)
{
    int i;
    struct Node* head = NULL, *newp;
    for (i = size - 1; i >= 0; --i)
    {
        newp = (struct Node*)malloc(sizeof(struct Node));
        newp -> val = arr[i];
        newp -> next = head;
        head = newp;
    }
    return head;
}

struct Node* delete(struct Node* head, int val)
{
    struct Node *prev, *p;
    prev = NULL; p = head;
    while (p != NULL)
    {
        if (p -> val == val)
            break;
            prev = p;
            p = p -> next;
    }
    if (p == NULL)
        return head;
    if (p == head)
        head = head -> next;
    else
        prev -> next = p -> next;
    free(p);
    return head;
}

int main()
{
    int i, *arr, size, val;
    struct Node* p, *target;
    printf("请输入数组大小size：");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    printf("请输入数组：");
    for (i = 0; i < size; ++i)
        scanf("%d", &arr[i]);
    struct Node* head = construct(arr, size);

    printf("请输入待删除的数：");
    scanf("%d", &val);
    head = delete(head, val);
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p -> val);
        p = p -> next;
    }
    printf("\n");
    return 0;
}

