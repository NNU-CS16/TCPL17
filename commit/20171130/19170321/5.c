    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
        struct Node* next;
    };
    struct Node* creat();
    struct Node* delete(struct Node* head,struct Node* target);
    void output(struct Node* head );
    int main()
    {
        struct Node * target;
        printf ("input to be deleted target:");
        scanf ("%d", &target -> val);
        struct Node* head = NULL;
        head = creat();
        output( head );
        head = delete(head, target);
        output( head );
        return 0;
    }
    struct Node* creat()
    {
        struct Node* p2,* p1,*p3;
        p1 = (struct Node *)malloc(sizeof(struct Node));
        p1 -> val = 123;
        p2 = (struct Node *)malloc(sizeof(struct Node));
        p2 -> val = 456;
        p3 = (struct Node *)malloc(sizeof(struct Node));
        p3 -> val = 789;
        p1 -> next = p2;
        p2 ->next = p3;
        p3 -> next = NULL;
        return p1;
    }
    void output(struct Node* head )
    {
        struct Node * p;
        p = head;
        while(p!= NULL)
        {
            printf ("%X\t%d\t%X\n",p, p -> val, p -> next);
            p = p -> next;
        }
    }
    struct Node* delete(struct Node* head,struct Node* target)
    {
        struct Node *prev, *p;
        prev = NULL;
        p = head;
        while(p != NULL)
        {
            if (p -> val == target -> val)
            break;
            prev = p;
            p = p -> next;
        }
        if (p == NULL)
            return head;
        if (p == head)
            head = head -> next;
        else
            prev -> next = p ->next;
        free(p);
        return head;
    }
