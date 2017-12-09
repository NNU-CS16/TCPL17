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
        p1->val = 3;
        p2 = (struct Node *)malloc(sizeof(struct Node));
        p2->val = 45;
        p3 = (struct Node *)malloc(sizeof(struct Node));
        p3->val = 68;
        p1->next = p2;
        p2->next = p3;
        p3->next = NULL;
        return p1;
    }
    void OutPut(struct Node *head)
    {
        struct Node *p;
        p = head;
        while(p != NULL)
        {
            printf("%d ", p->val);
            p = p->next;
        }
        printf("\n");
    }
    struct Node* insert(struct Node *head, int val)
    {
        struct Node *p, *prev;
        struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
        newp->val = val;
        prev = NULL;
        p = head;
        while (p != NULL)
        {
            if(val <= p->val)
                break;
            prev = p;
            p = p->next;
        }
        newp->next = p;
        prev->next = newp;
        return head;
    }
    
    int main()
    {
        int val;
        scanf("%d", &val);
        struct Node *head;
        head = Create1();
        head = insert(head, val);
        OutPut(head);
        return 0;
    }
















