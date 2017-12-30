    #include "大礼包.h"
    void xianshi ()
    {
        Book* p = zhibiao();	
        while (p != NULL)
	{
	    printf("书名:%s\t作者:%s\tISBN:%s\t价格:%.2lf\n", 
			    p -> name, p -> writer, p -> ISBN, p -> price);
	    p = p -> next;
	}
    }
