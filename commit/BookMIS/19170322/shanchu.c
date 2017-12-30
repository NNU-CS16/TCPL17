    #include "大礼包.h"
    void shanchu()
    {
        int n;
        printf("删除书目请按1,返回请按0。");
	scanf("%d", &n);
	Book* head = zhibiao();
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
