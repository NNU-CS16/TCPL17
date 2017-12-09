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
    struct Node* delete(struct Node *head, int n)
    {
        struct Node *p, *prev;
        p = head;
        prev = NULL;
        while (p != NULL)
        {
            if (p->val == n)
            {
                if (p == head)
                {
                    head = head->next;
                    free(p);
                    p = head;
                }
                else
                {
                    prev->next = p->next;
                    free(p);
                    p = prev->next;
                }
            }
            else
            {
                prev = p;
                p = p->next;
            }
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
        int n;
        scanf("%d", &n);
        struct Node *head;
        head = Create1();
        head = delete(head, n);
        OutPut(head);
        return 0;
    }

        


