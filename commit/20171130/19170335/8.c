    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
        struct Node *next;
    };
//insert before head
    struct Node* insertbeforehead(struct Node *newp, struct Node *head)
    {   
        newp->next = head;
        head = newp;
        return head;
    }
//  construct
    struct Node* construct(int arr[], int size)
    {
        struct Node *head, *newp;
        int i;
        head = NULL;
        for (i = size - 1; i >= 0; i--)
        {
            newp = (struct Node *)malloc(sizeof(struct Node));
            newp->val = arr[i];
            head = insertbeforehead(newp, head);
        }
        return head;
    }
//  reverse
    struct Node* reverse(struct Node *head)
    {
        struct Node *temp, *firstnode;
        firstnode = head;
        while (firstnode->next != NULL)
        {
            temp = head;
            head = firstnode->next;
            firstnode->next = head->next;
            head->next = temp;
        }
        return head;
    }
//  merge
    struct Node* merge(struct Node *head1, struct Node *head2)
    {
        struct Node *p1, *p2, *headall;
        p1 = head1;
        p2 = head2;
        headall =NULL;
        while (p1 != NULL && p2 != NULL)
        {
            if (p1->val < p2->val)
            {
                headall = insertbeforehead(p1, headall);
                p1 = p1->next;
            }
            else
            {
                headall = insertbeforehead(p2, headall);
                p2 = p2->next;
            }
        }
        while (p1 != NULL)
        {
            headall = insertbeforehead(p1, headall);
            p1 = p1->next;
        }
        while (p2 != NULL)
        {
            headall = insertbeforehead(p2, headall);
            p2 = p2->next;
        }
        headall = reverse(headall);
        return headall;
    }
//  output
    void OutPut(struct Node *head)
    {
        struct Node *p =head;
        while (p != NULL)
        {
            printf("%d ",p->val);
            p = p->next;
        }
        printf("\n");
    }

    int main()
    {
        int size1, size2, i;
        scanf("%d%d", &size1, &size2);
        int arr1[size1], arr2[size2];
        for (i = 0; i < size1; i++)
            scanf("%d", arr1 + i);
        for (i = 0; i < size2; i++)
            scanf("%d", arr2 + i);
        struct Node *head1, *head2, *headall;
        head1 = construct(arr1, size1);
        head2 = construct(arr2, size2);
        headall = merge(head1, head2);
        OutPut(headall);
        return 0;
    }










