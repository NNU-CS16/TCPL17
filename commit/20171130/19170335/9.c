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
    void clear(struct Node *head)
    {
        struct Node *p;
        while (head != NULL)
        {
            p = head;
            head = head->next;
            free(p);
        }
        free(head);
        head = NULL;
    }
    int main()
    {
        struct Node *head;
        head = Create1();
        clear(head);
        printf("%d", head->val);
        return 0;
    }

