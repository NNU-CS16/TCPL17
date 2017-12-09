    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
        struct Node* next;
    };
    struct Node* creat();
    struct Node* insert(struct Node* head,int val);
    void output(struct Node* head );
    int main()
    {
        struct Node* head = NULL;
        head = creat();
        output ( head );
        int a;
        printf ("input a:");
        scanf ("%d",& a);
        head = insert(head, a);
        output ( head );
        return 0;
    }
    struct Node* creat()
    {
        struct Node* head,* p1;
        head = (struct Node *)malloc(sizeof(struct Node));
        head -> val = 123;
        p1 = (struct Node *)malloc(sizeof(struct Node));
        p1 -> val = 456;
        head -> next = p1;
        p1 -> next = NULL;
        return head;
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
    struct Node* insert(struct Node* head,int val)
    {
        struct Node *p = head,* prev;
        struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
        newp -> val = val;
        while (p != NULL )
        {
            if(p -> val > newp ->val)
                break;
            prev = p;
            p = p -> next;
        }
        newp -> next = p;
        if(p == head)
            head = newp;
        else
          prev -> next = newp;
        return head;
    }
