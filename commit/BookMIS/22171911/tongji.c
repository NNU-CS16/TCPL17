#include "head.c"
void tongji( )
{
    int n = 0;
    books* p;
    books* p1;
    books* f1;
    books* p2, *f2;
    books* p3, *f3;		
    while (p != NULL)
    { 
	n++;
	p = p -> next;
    }
    printf ("图书总数为%d\n", n);
    p3 = p1 -> next;
    while (p3 != NULL && p1 != NULL)
    {
         if (p1 -> price < p3 -> price)
	{   
 	    p2 = p3;
	    p1 = p1 -> next;
         }
         else
         {
	    p2 = p1;
	    p3 = p3 -> next;			
	}
    }
    printf ("价格最贵为%lf", p2 -> price); 
    f3 = f1 -> next;
    while (f3 != NULL && f1 != NULL)
    {
	if (f1 -> price > f3 -> price)
	{   
	    f2 = f3;
	    f1 = f1 -> next;
        }   
        else
        {
	    f2 = f1;
	    f3 = f3 -> next;
         }   
     }   
    printf ("价格最低为%lf", f2 -> price);
    books* head; 
    books* h;
    int c = 0;
    while (head != NULL)
    {
	books* shell = head -> next;		
	while (shell != NULL)
	{
	    if (strcmp(head -> writer,shell -> writer) != 0)
			shell = shell -> next;
	   else
	   {
		c++;
		break;
	    }
	}
	head = head -> next;
     }
     printf ("作者数为:%d", n - c);
   }
