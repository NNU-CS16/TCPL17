    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
        struct Node *next;
    };
//  struct
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
//  delete
    struct Node* delete(struct Node *head, struct Node *target)
    {
        struct Node *prev, *p;
        prev = NULL;
        p = head;
        if (head == target)
            head = head->next;
        else
        {
            while (p != target)
            {
                prev = p;
                p = p->next;
            }
            prev->next = p->next;
            free(p);
        }
        return head;
    }
//  output
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
        struct Node *head, *target;
        scanf("%d", &(target->val));
        head = Create1();
        head = delete(head, target);
        OutPut(head);
        return 0;
    }

    




