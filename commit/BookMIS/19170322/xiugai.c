    #include "大礼包.h"
    void xiugai()
    {
        int n;
	printf("修改请输入1,返回请输入0。");
	scanf("%d", &n);
	char ISBN[8];
	Book* head = zhibiao();
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
