    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
        struct Node* next;
    };
    void output( struct Node *head);
    struct Node * creat();
    void clear(struct Node* head);
    int main()
    {
        struct Node * head;
        head = creat();
        output( head);
        clear(head);
        output( head);
        return 0;
    }
    struct Node * creat()
    {
        struct Node *head = NULL, *newp;
        int n, i;
        printf("the number of figure:");
        scanf ("%d",&n);
        int a[n];
        printf ("input data:\n");
        for (i = 0; i < n; i++)
             scanf("%d",&a[i]);
        for (i = n - 1; i >= 0; i--)
        {
             newp = (struct Node *)malloc(sizeof(struct Node));
             newp -> val = a[i];
             newp -> next = head;
             head = newp;
        }
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
    void clear(struct Node* head)
    {
        struct Node* p;
        while(head!= NULL)
        {
             p = head;
             head = head ->next;
             free(p);
        }
    }
