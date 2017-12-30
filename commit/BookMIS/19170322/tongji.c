    #include "大礼包.h"
    void tongji ()
    {
        int shuliang = 0;
	Book* shift1 = zhibiao();
	Book* p1 = zhibiao();
	Book* q1 = zhibiao();
	Book* p2, *p3;
	Book* q2, *q3;
	while (shift1 != NULL)
	{
	    shuliang++;
	    shift1 = shift1 -> next;
	}
        printf ("图书总数为%d\n", shuliang);
	p3 = p1 -> next;
	while (p1 != NULL && p3!= NULL)
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
	printf("价格最高的书为：%s\n  ", p2 -> name);
	printf("价格为：%f\n", p2 -> price);
	q3 = q1 -> next;
	while (q3 != NULL && q1 != NULL)
	{
	    if (q1 -> price > q3 -> price)
	    {
	        q2 = q3;
		q1 = q1 -> next;
	    }
	    else
	    {
		q2 = q1;
		q3 = q3 -> next;
	    }
	}
	printf("价格最低的书为：%s\n  ",q2 -> name);
	printf("价格为：%f\n", q2 -> price);
    }
	
