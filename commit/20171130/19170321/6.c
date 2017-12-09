    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
        struct Node* next;
    };
    void output( struct Node *head);
    struct Node * creat();
    struct Node* delete(struct Node* head, int val);
    int main()
    {
        struct Node * head;
        head = creat();
        output( head);
        int a;
        printf("the figure to be deleted:");
        scanf ("%d",& a);
        delete(head, a);
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
    void output( struct Node *head)
    {
        struct Node* p;
        p = head;
        while (p != NULL)
        {
            printf("%X\t%d\t%X\n",p, p -> val, p ->next);
            p = p -> next;
        }
    }
    struct Node* delete(struct Node* head, int val)
    {
        struct Node * prev = NULL, *p = head;
        while(p != NULL)
        {
            if (p-> val == val)
            {
                if (p == head)
                {
                     head = p -> next;
                     free(p);
                     p = head;
                 }
                else
                {
                      prev -> next = p -> next;
                      free(p);
                      p = prev -> next;
                 }
            }

            else
            {
                prev = p;
                p = p -> next;
            }
        }
        if (p == NULL)
            return head;
    }
