#include "head.h"

void seek()
{
    int c;
    printf("  <<<<<<<<<<<<<<<<<<<<-->>>>>>>>>>>>>>>>>>>>\n");
    printf("  ||                                      ||\n");
    printf("  ||         ' 1 '         “按ISBN查询”   ||\n");
    printf("  ||                                      ||\n");
    printf("  ------------------------------------------\n");
    printf("  ||                                      ||\n");
    printf("  ||         ' 2 '         “按书名查询”   ||\n");
    printf("  ||                                      ||\n");
    printf("  ------------------------------------------\n");
    printf("  ||                                      ||\n");
    printf("  ||         ' 3 '         “按作者查询”   ||\n");
    printf("  ||                                      ||\n");
    printf("  ------------------------------------------\n");
    printf("  ||                                      ||\n");
    printf("  ||         ' 0 '          “退出”        ||\n");
    printf("  ||                                      ||\n");
    printf("  <<<<<<<<<<<<<<<<<<<<-->>>>>>>>>>>>>>>>>>>>\n");
    printf("  请输入你所选的编号：");
    scanf("%d",&c);
    int times = 0;
    if(c == 1)
    {
        char ISBN[8];
        printf("    请输入该图书的ISBN：");
        scanf("%s", ISBN);
        int times = 0;
        struct Book* shift = load();
        while(shift -> next != NULL)
        {
            if(strcmp(shift -> ISBN, ISBN) == 0)
                {
		    times++;
		    printf("    书名：%s\n", shift -> name);
		    printf("    作者：%s\n", shift -> writer);
		    printf("    价格：%lf\n", shift -> price);
		    printf("    ISBN: %s\n", shift -> ISBN);
		}
		shift = shift -> next;
	    }
	    if(strcmp(shift -> ISBN, ISBN) == 0)
	    {
	        times++;
		printf("    书名：%s\n", shift -> name);
		printf("    作者：%s\n", shift -> writer);
		printf("    价格：%lf\n", shift -> price);
		printf("    ISBN: %s\n", shift -> ISBN);
	    }
	    if(times == 0)
	        printf("对不起，查询结果为空。\n");
	}
	if(c == 3)
	{
	    char writer[20];
	    printf("    请输入您想要查询的作者：");
	    scanf("%s",writer);
	    times = 0;
	    struct Book* shift = load();
	    while(shift -> next != NULL)
	    {
	        if(strcmp(shift -> writer, writer) == 0)
		{
		    times++;
		    printf("    书名：%s\n", shift -> name);
		    printf("    作者：%s\n", shift -> writer);
		    printf("    价格：%lf\n", shift -> price);
		    printf("    ISBN: %s\n", shift -> ISBN);																	      }
		shift = shift -> next;
	    }
	    if(strcmp(shift -> writer, writer) == 0)
	    {
	        times++;
		printf("    书名：%s\n", shift -> name);
		printf("    作者：%s\n", shift -> writer);
		printf("    价格：%lf\n", shift -> price);
		printf("    ISBN: %s\n", shift -> ISBN);
	    }
	    if(times == 0)
	        printf("对不起，查询结果为空。\n");
	}
	if(c == 2)
	{
	    char ziduan[20];
	    printf("    请输入您想要查询的书名的关键字：");
	    scanf("%s", ziduan);
	    times = 0;
	    struct Book* shift = load();
	    char* balala;
	    while (shift -> next != NULL)
	    {
	        balala = strstr (shift -> name, ziduan);// strstr可直接读取主字符串中子字符串的位置
	        if(balala != NULL)
		{
		    times++;
		    printf("    书名：%s\n", shift -> name);
		    printf("    作者：%s\n", shift -> writer);
		    printf("    价格：%lf\n", shift -> price);
		    printf("    ISBN: %s\n", shift -> ISBN);
		}
		shift = shift -> next;
	    }
	    balala = strstr (shift -> name, ziduan);
	    if(balala != NULL)
	    {
	        times++;
		printf("    书名：%s\n", shift -> name);
		printf("    作者：%s\n", shift -> writer);
		printf("    价格：%lf\n", shift -> price);
	    }
	    if (times == 0)
	        printf("对不起，查询结果为空。\n");
	}
    }


void add()
    {
		int n;
		printf("添加书目请按1,返回请按0。");
		scanf("%d", &n);
		Book* head = load();
		while(n == 1)
		{
	    	char ISBN[8];
	    	Book* shift = head;
	    	Book* tianjia = (Book*)malloc(sizeof(Book));
	    	tianjia -> next = NULL;
	    	printf("    请输入您想要添加书目的ISBN：");
	    	scanf("%s", ISBN);
	    	while(shift -> next != NULL && strcmp(shift -> ISBN, ISBN) != 0)
	        	shift = shift -> next;
	    	if(shift -> next == NULL && strcmp(shift -> ISBN, ISBN) != 0)
	    	{
	        	shift -> next = tianjia;
	        	printf("    该ISBN未重复，可添加该书目。");
	        	printf("    请输入添加内容:");
	        	scanf("%s %s %s %lf", tianjia -> name, tianjia -> writer, tianjia -> ISBN, &tianjia -> price);
	    	}
	    	printf("继续添加请按1,返回请按0。");
	    	scanf("%d", &n);
		}
		FILE* fp;
		if ((fp = fopen ("Book.csv", "w")) == NULL)
        {
	    	printf ("无法打开文件\n");
	    	exit (1);
		}
		while (head != NULL)
		{                
	    	fprintf (fp,"%s %s %s %lf\n", head -> name, head -> writer, head -> ISBN, head -> price);
	    	head = head -> next;
		}
        	fclose (fp);
    	}


    void revise()
    {
        int n;
	printf("修改请输入1,返回请输入0。");
	scanf("%d", &n);
	char ISBN[8];
	Book* head = load();
	while(n == 1)
	{
	    printf("请输入您要修改的图书的ISBN：");
	    scanf("%s", ISBN);
	    Book* shift = head;
	    while(strcmp(shift -> ISBN, ISBN) != 0 && shift != NULL)
	        shift = shift -> next;
	    if(shift == NULL)
		printf("对不起，系统未查询到该ISBN，请先添加。");
	    else
	    {
	        printf("请选择您要修改的内容：\n");
		printf("1. 书名 2.作者 3.价格");
		scanf("%d", &n);
		if(n == 1)
		    scanf("%s", shift -> name);
		if(n == 2)
		    scanf("%s", shift -> writer);
		if(n == 3)
		    scanf("%lf", &shift -> price);
	    }
	    printf("继续修改请输入1,返回请输入0。");
	    scanf("%d", &n);
	}
	FILE* fp;
        if ((fp = fopen ("Book.csv", "w")) == NULL)
	{
	    printf ("无法打开文件\n");
	    exit (1);
	}
	while (head != NULL)
	{
	    fprintf (fp,"%s %s %s %lf\n", head -> name, head -> writer, head -> ISBN, head -> price);
	    head = head -> next;
        }
	fclose (fp);
    }



    void del()
    {
        int n;
        printf("删除书目请按1,返回请按0。");
	scanf("%d", &n);
	Book* head = load();
	while(n)
	{
	    char ISBN[8];
	    printf("请输入您想要删除的书目的ISBN：");
	    scanf("%s",ISBN);
	    Book* shift1 = head;
	    Book* shift2 = (Book*)malloc(sizeof(Book));
	    while(strcmp(shift1 -> next -> ISBN, ISBN) != 0 && shift1 != NULL)
	        shift1 = shift1 -> next;
	    if(shift1 == NULL)
	        printf("对不起，系统未查询到该ISBN，请先添加。");
	    else
	    {
	        shift2 = shift1 -> next -> next;
		shift1 -> next = shift2;
	    }
	    printf("继续删除请按1,返回请按0。");
	    scanf("%d", &n);
	}
        FILE* fp;
        if ((fp = fopen ("book.csv", "w")) == NULL)
	{
	    printf ("无法打开文件\n");
	    exit (1);
	}
        while (head != NULL)
	{                
	    fprintf (fp,"%s %s %s %lf\n", head -> name, head -> writer, head -> ISBN, head -> price);
	    head = head -> next;
        }
	fclose (fp);
    }



    void show()
    {
        Book* p = load();	
        while (p != NULL)
	{
	    printf("书名:%s\t作者:%s\tISBN:%s\t价格:%.2lf\n", 
			    p -> name, p -> writer, p -> ISBN, p -> price);
	    p = p -> next;
	}
    }


    void count()
    {
        int shuliang = 0;
	Book* shift1 = load();
	Book* p1 = load();
	Book* q1 = load();
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


    Book* load()
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
