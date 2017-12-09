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

struct Node* reverse(struct Node* head)
{
	struct Node *newp, *temp = head;
	if(head->next == NULL || head->next->next == NULL)    
    {  
       return head;   /*链表为空或只有一个元素则直接返回*/  
    }
	while (head->next != NULL)
	{
		newp = head->next;
		head -> next = newp -> next;
		newp -> next = temp;
		temp = newp;
	}
	return temp; 
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
	head = reverse(head);
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p -> val);
        p = p -> next;
    }
    printf("\n");
    return 0;
}

