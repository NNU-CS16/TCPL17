 #include <stdio.h>
 #include <stdlib.h>

 struct Node
 {
	int val;
	struct Node* next;
 };

 struct Node* merge(struct Node* head1, struct Node* head2);
 struct Node* create1();
 struct Node* create2();
 struct Node* create3(int str[], int n);
 void output(struct Node* head);
 int sum(struct Node* head);

 int main()
{
	struct Node *head1, *head2, *head;
	head1 = create1();
	head2 = create2();
	head = merge(head1, head2);
	output(head);
	return 0;
}

 struct Node* create1()
{
	struct Node *p1, *p2, *p3;
	p1 = (struct Node *)malloc(sizeof(struct Node));
			p1->val = 50;
	p2 = (struct Node *)malloc(sizeof(struct Node));
			p2->val = 54;
	p3 = (struct Node *)malloc(sizeof(struct Node));
			p3->val = 59;
	p1->next = p2;
	p2->next = p3;
	p3->next = NULL;
	return p1;
}

 struct Node* create2()
{
	struct Node *p4, *p5, *p6;
    p4 = (struct Node *)malloc(sizeof(struct Node));
            p4->val = 60;
    p5 = (struct Node *)malloc(sizeof(struct Node));
            p5->val = 63;
    p6 = (struct Node *)malloc(sizeof(struct Node));
            p6->val = 69;
    p4->next = p5;
    p5->next = p6;
    p6->next = NULL;
    return p4;
}

 struct Node* create3(int str[], int n)
{
	struct Node *head, *newp;
	int i;
	head = NULL;
	for ( i = 0; i < n; i++ )
	{
		newp = (struct Node *)malloc(sizeof(struct Node));
		newp->val = str[n-1-i];
		newp->next = head;
		head = newp;
	}
	return head;
}

 int sum(struct Node* head)
{
	int size = 0;
	struct Node* p = head;
	while (p != NULL)
	{
		size++;
		p = p->next;
	}
	return size;
}
 struct Node* merge(struct Node* head1, struct Node* head2)
{
	struct Node *p1, *p2, *head;
	p1 = head1;
	p2 = head2;
	int n1, n2, i, j, k;
	int *a, *b, *c;
	n1 = sum(p1);
	n2 = sum(p2);
	
	a = (int *)malloc(n1 * sizeof(int));
	b = (int *)malloc(n2 * sizeof(int));
	c = (int *)malloc((n1+n2) * sizeof(int));

	for (i = 0; i < n1; i++)
	{
		a[i] = p1->val;
		p1 = p1->next;
	}
	for (i = 0; i < n2; i++)
	{
		b[i] = p2->val;
		p2 = p2->next;
	}
	i = 0;
	j = 0;
	k = 0;
	while ( i < n1 && j < n2 )
	{
		if (a[i] < b[j])
		{
			c[k++] = a[i++];
		}
		else
		{
			c[k++] = b[j++];
		}
	}
	while ( i < n1 )
	{
		c[k++] = a[i++];
	}
	while ( j < n2 )
	{
		c[k++] = b[j++];
	}
	
	head = create3(c, n1+n2);
	return head;
}

 void output(struct Node *head)
{
	struct Node *p;
	p = head;
	while (p != NULL)
	{
		printf("%p\t%d\t%p\n", p, p->val, p->next);
		p = p->next;
	}

}
