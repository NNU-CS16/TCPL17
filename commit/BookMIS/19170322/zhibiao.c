    #include "大礼包.h"
    Book* zhibiao()
    {
        Book* head = (Book*)malloc(sizeof(Book));
	char bname[50];
	char wname[20];
	char ISBN[8];
	double price; 
	Book* q = head;
	Book* p = head;
	p -> next = NULL;
	FILE* r = fopen ("Book.csv","r");
	if (r == NULL)
	{
	    printf ("打开文件失败");
	    exit (1);
	}
	while (fscanf (r,"%s %s %s %lf", bname, wname, ISBN, &price) != EOF)
	{               
	    q = (Book*)malloc(sizeof(Book));
	    strcpy(q -> name, bname);
	    strcpy(q -> writer, wname);
	    strcpy(q -> ISBN, ISBN);
	    q -> price = price;
	    p -> next = q;
	    p = q;            
	}
	p -> next = NULL;
	fclose (r);
	return head -> next;
    }
