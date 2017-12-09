    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
        struct Node *next;
    };
    struct Node* Create1()
    {
        struct Node *p1, *p2, *p3;
        p1 = (struct Node *)malloc(sizeof(struct Node));
        p1->val = 1;
        p2 = (struct Node *)malloc(sizeof(struct Node));
        p2->val = 2;
        p3 = (struct Node *)malloc(sizeof(struct Node));
        p3->val = 3;
        p1->next = p2;
        p2->next = p3;
        p3->next = NULL;
        return p1;
    }
    struct Node* reverse(struct Node *head)
    {
        struct Node *temp, *firstnode;
        firstnode = head;
        while (firstnode->next != NULL)
        {
            temp =head;
            head = firstnode->next;
            firstnode->next =head->next;
            head->next = temp;
        }
        return head;
    }
    void OutPut(struct Node *head)
    {
        struct Node *p = head;
        while (p != NULL)
        {
            printf("%d ", p->val);
            p = p->next;
        }
        printf("\n");
    }
    int main()
    {
        struct Node *head;
        head = Create1();
        head = reverse(head);
        OutPut(head);
        return 0;
    }


