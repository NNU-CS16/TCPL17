    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
        struct Node *next;
    };
    struct Node* Insert(struct Node *head, int val)
    {
        struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
        newp->val = val;
        newp->next = head;
        head = newp;
        return head;
    }
    struct Node* create1()
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

    int main()
    {
        int newval;
        scanf("%d", &newval);
        struct Node *head;
        head = create1();
        head = Insert(head, newval);
        printf("%d\n", head->val);
        return 0;
    }




