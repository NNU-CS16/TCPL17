 #include <stdio.h>
 #include "cmd.h"
 #include <stdlib.h>
 
 Book *delete(Book *head)
{
	Book *p, *pre;
	int sum, i = 0;
	pre = head;
	printf("=======================\n");
	printf("==请选择需要删除的本数:  ");
	scanf("%d", &sum);

	do
	{
		p = search(head);
		if (pre == p)
		{
			free(p);
			head = head->next;
			i++;
			continue;
		}
		while (pre != NULL)
		{
			if (pre->next == p)
				break;
			else
				pre = pre->next;
		}
		pre->next = p->next;
		free(p);
		pre = head;
		i++;
	}while (i < sum);
	return head;
}
