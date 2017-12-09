#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};
struct Node* delete(struct Node* head, struct Node* target);
struct Node* create(int arr[], int n);
void output(struct Node* head);

int main()
{
	struct Node *target;
	int arr[6] = {3, 78, 37, 55, 29, 67}, val = 55;
	target = create(arr, 6);
	while (target != NULL)
	{
		if (target->val == val)
			break;
		target = target->next;
	}
	if (target == NULL)
		printf("No found!\n");
	output(delete(create(arr, 6), target));

	struct Node* p = delete(create(arr, 6), target);
    while(p != NULL)
    {
        free(p);
        p = p->next;
    }
	return 0;
}

struct Node* delete(struct Node* head, struct Node* target)
{
	struct Node *prev, *p;
	p = head;
	while (p != NULL)
	{
		if (p->val == target->val)
			break;
		prev = p;
		p = p->next;
	}
	if (p == NULL)
		return head;
	if (p == head)
		head = head->next;
	else
		prev->next = p->next;
	free(p);
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
