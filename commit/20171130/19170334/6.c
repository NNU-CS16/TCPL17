#include <stdio.h>//删除所有与输入值相等的结点
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* delete(struct Node* head, int val);

int main()
{
	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* shift = (struct Node*)malloc(sizeof(struct Node));
	struct Node* a = (struct Node*)malloc(sizeof(struct Node));
    struct Node* b = (struct Node*)malloc(sizeof(struct Node));
    struct Node* c = (struct Node*)malloc(sizeof(struct Node));
    struct Node* d = (struct Node*)malloc(sizeof(struct Node));
    struct Node* e = (struct Node*)malloc(sizeof(struct Node));
	struct Node* f = (struct Node*)malloc(sizeof(struct Node));
    head -> next = a;
    a -> val = 1;
    a -> next = b;
    b -> val = 2;
    b -> next = c;
    c -> val = 3;
    c -> next = d;
    d -> val = 4;
    d -> next = e;
    e -> val = 5;
    e -> next = f;
	f = NULL;
	printf("原链表为：1 2 3 4 5\n删除：");
    int n;
    scanf("%d", &n);
	delete(head, n);
	if(head -> next == NULL) printf("NULL\n");
	else
	{
		for(shift = head -> next; shift -> next != NULL; shift = shift -> next)
		printf("%d ", shift -> val);
		printf("\n");
	}
	return 0;
}

struct Node* delete(struct Node* head, int val)
{
	int a[50];
    int i = 0, j = 0;
    struct Node* shift = (struct Node*)malloc(sizeof(struct Node));
    struct Node* right = (struct Node*)malloc(sizeof(struct Node));
    for(shift = head -> next; shift != NULL; shift = shift -> next)
    {
        j++;
        if(shift -> val == val)
            a[i++] = j;
    }
    j = 0;
    i = 0;
    for(shift = head; shift -> next != NULL; shift = shift -> next)
    {
        j++;
        if(j == a[i])
        {
            right = shift -> next;
            right = right -> next;
            shift -> next = right;
            j++;
            i++;
        }
    }
    return head;
}
