    #include "大礼包.h"									    
    void chaxun()
    {
        int c;
	printf("    您好，请问您想用什么方式查询书籍呢？\n");
	printf("    1.ISBN     2.书名    3.作者\n");
	scanf("%d",&c);
	int times = 0;
	if(c == 1)
	{
	    char ISBN[8];
	    printf("    请输入该图书的ISBN：");
	    scanf("%s", ISBN);
	    int times = 0;
	    struct Book* shift = zhibiao();
	    while(shift -> next != NULL)
	    {
	        if(strcmp(shift -> ISBN, ISBN) == 0)
                {
		    times++;
		    printf("    书名：%s\n", shift -> name);
		    printf("    作者：%s\n", shift -> writer);
		    printf("    价格：%f\n", shift -> price);
		    printf("    ISBN: %s\n", shift -> ISBN);
		}
		shift = shift -> next;
	    }
	    if(strcmp(shift -> ISBN, ISBN) == 0)
	    {
	        times++;
		printf("    书名：%s\n", shift -> name);
		printf("    作者：%s\n", shift -> writer);
		printf("    价格：%f\n", shift -> price);
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
	    struct Book* shift = zhibiao();
	    while(shift -> next != NULL)
	    {
	        if(strcmp(shift -> writer, writer) == 0)
		{
		    times++;
		    printf("    书名：%s\n", shift -> name);
		    printf("    作者：%s\n", shift -> writer);
		    printf("    价格：%f\n", shift -> price);
		    printf("    ISBN: %s\n", shift -> ISBN);																	      }
		shift = shift -> next;
	    }
	    if(strcmp(shift -> writer, writer) == 0)
	    {
	        times++;
		printf("    书名：%s\n", shift -> name);
		printf("    作者：%s\n", shift -> writer);
		printf("    价格：%f\n", shift -> price);
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
	    struct Book* shift = zhibiao();
	    char* balala;
	    while (shift -> next != NULL)
	    {
	        balala = strstr (shift -> name, ziduan);// strstr可直接读取主字符串中子字符串的位置
	        if(balala != NULL)
		{
		    times++;
		    printf("    书名：%s\n", shift -> name);
		    printf("    作者：%s\n", shift -> writer);
		    printf("    价格：%f\n", shift -> price);
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
		printf("    价格：%f\n", shift -> price);
	    }
	    if (times == 0)
	        printf("对不起，查询结果为空。\n");
	}
    }
