  #include <stdio.h>
  #include <stdlib.h>

  struct Node 
  {
	int date;
	struct Node *next;
  };

  struct Node *Create1()
  {
        struct Node *p1, *p2, *p3;

        p1 = (struct Node *)malloc(sizeof(struct Node)); p1->date = 101;
        p2 = (struct Node *)malloc(sizeof(struct Node)); p2->date = 103;
        p3 = (struct Node *)malloc(sizeof(struct Node)); p3->date = 105;
        p1->next = p2;  p2->next = p3;  p3->next = NULL;

        return p1;
  }

  struct Node *Create2()
  {
        struct Node *p1, *p2, *p3;

        p1 = (struct Node *)malloc(sizeof(struct Node)); p1->date = 100;
        p2 = (struct Node *)malloc(sizeof(struct Node)); p2->date = 102;
        p3 = (struct Node *)malloc(sizeof(struct Node)); p3->date = 106;
        p1->next = p2;  p2->next = p3;  p3->next = NULL;

        return p1;
  }

  struct Node *merge(struct Node *head1, struct Node *head2)
  {
	struct Node *p1 = head1, *p2 = head2;
	int i = 0, arr[10];
	while( p1!= NULL)
	{
		arr[i] = p1->date;
		i++;
		p1 = p1->next;
	}

	while(p2 != NULL)	
	{
		arr[i] = p2->date;
		i++;
		p2 = p2->next;
	}
	int mid = i / 2, j = 0, k = mid + 1, t = 0;
	int arr3[10];
	while( j <= mid && k <= i)
	{
		if( arr[j] <= arr[k])
		{
			arr3[t] = arr[j];
			j++;
			t++;
		}
		else
		{
			arr3[t] = arr[k];
			k++;
			t++;
		}
	}                                   //我的想法是再把排好序的数组放入新的链表，但快要到12点了，就先交吧。。。。。。

  }
	
		 
	 

  
  void Output(struct Node *head)
  {
        struct Node *p;

        p = head;
        while(p != NULL)
        {
                printf("%d ", p->date);
                p = p->next;
        }
        printf("\n");
  }
  
  int main()
  {
	struct Node *head1 = Create1();
	struct Node *head2 = Create2();
	
	struct Node *merge(struct Node *head1, struct Node *head2);
	Output(head);
	return 0;
  }
