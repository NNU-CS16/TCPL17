#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};
struct Node* reverse(struct Node* head);
void output(struct Node* head);
struct Node* create(int arr[], int n);

int main()
{
	int arr[6] = {2, 37, 52, 55, 56, 99};
	output(reverse(create(arr, 6)));

	return 0;
}

struct Node* reverse(struct Node* head)
{
	int i;
	int tmp[10];
	struct Node *p;
	p = head;
	for (i = 0; p != NULL; ++i)
	{
		tmp[i] = p->val;
		p = p->next;
	}
	p = head;
	for (--i; p != NULL; --i)
	{
		p->val = tmp[i];
		p = p-> next;
	}

	return head;
}

struct Node* create(int arr[], int n)
{
    int i;
    struct Node *head, *newp;
    head = NULL;
    for (i = 0; i <= n - 1; ++i)
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

