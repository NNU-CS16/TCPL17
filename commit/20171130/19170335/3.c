    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
        struct Node *next;
    };

    struct Node *Create1()
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

    struct Node* Insert(struct Node *head, int val)
    {
        struct Node *prev, *p, *newp;
        newp = (struct Node *)malloc(sizeof(struct Node));
        newp->val = val;
        prev =NULL;
        p =head;
        while (p != NULL)
        {
            prev = p;
            p = p->next;
        }
        newp->next = NULL;
        prev->next = newp;
        return head;
    }
    
    int main()
    {
        int val;
        scanf("%d", &val);
        struct Node *head, *p;
        head = Create1();
        head = Insert(head, val);
        p = head;
        while (p != NULL)
        {
            printf("%d ", p->val);
            p = p->next;
        }
        printf("\n");
        return 0;
    }









