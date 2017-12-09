    #include <stdio.h>
    #include <stdlib.h>
    struct Node
    {
        int val;
        struct Node* next;
    };
    struct Node* costruct(int arr[], int size);
    void output(struct Node* head);
    int main()
    {
         int A[5] = {12,34,25,67,78};
         int n = 5;
         struct Node* head = costruct(A, n);
         output(head);
         return 0;
    }
    struct Node* costruct(int arr[], int size)
    {
        struct Node* head = NULL, *newp;
        int i;
        for (i = size - 1; i >= 0; i--)
        {
            newp = (struct Node * )malloc(sizeof(struct Node));
            newp -> val = arr[i];
            newp -> next = head;
            head = newp;
        }
        return head;
    }
    void output(struct Node* head)
    {
        struct Node* p;
        p = head;
        while (p != NULL)
        {
            printf("%X\t%d\t%X\n",p, p -> val, p -> next);
            p = p -> next;
         }
    }
