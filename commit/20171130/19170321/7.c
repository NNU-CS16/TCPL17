    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
        struct Node* next;
    };
    void output( struct Node *head);
    struct Node * creat();
    struct Node* reverse(struct Node* head);
    int main()
    {
        struct Node * head;
        head = creat();
        output( head);
        head = reverse( head);
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
    struct Node* reverse(struct Node* head)
    {
        struct Node* p1,*p2,*p3;
        p1 = head;
        p2 = p1 -> next;
        if(p2 == NULL)
            return head;
        p3 = p2 -> next;
        p1 -> next = NULL;
        while(1)
        {
           p2 -> next = p1;
           p1 = p2;
           p2 = p3;
           if(p2 == NULL)
           break;
           p3 = p3 -> next;
        }
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
