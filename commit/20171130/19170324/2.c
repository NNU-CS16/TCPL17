#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};
struct Node* insert(struct Node* head, int val);
struct Node* create(int arr[], int n);
void output(struct Node* head);

int main()
{
	int n, i, val;
	printf("数组元素个数：\n");
	scanf("%d", &n);
	int arr[n];
	printf("输入数组：\n");
	for (i = 0; i <= n - 1; ++i)
		scanf("%d", &arr[i]);
	printf("输入要插入的元素值\n");
	scanf("%d", &val);
	output(insert(create(arr, n), val));

    struct Node* p = insert(create(arr, n), val);
    while(p != NULL)
    {
        free(p);
        p = p->next;
    }
	return 0;	
}

struct Node* insert(struct Node* head, int val)
{
	struct Node *newp;
	newp = (struct Node *)malloc(sizeof(struct Node));
	newp->val = val;
	newp->next = head;
	head = newp;
	return head;
}

struct Node* create(int arr[], int n)
{
	int i;
	struct Node *head, *newp;
	head = NULL;
	for (i = 0; i <= n -1; ++i)
	{
		newp = (struct Node*)malloc(sizeof(struct Node));
		newp->val = arr[i];
		newp->next = head;
		head = newp;
	}
	return head;
}

void output(struct Node* head)
{
    struct Node *p;
    p = head;
    while (p != NULL)
    {
        printf("%d\n", p->val);
        p = p->next;
    }
}
