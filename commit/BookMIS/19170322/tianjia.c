    #include "大礼包.h"
    void tianjia()
    {
	int n;
	printf("添加书目请按1,返回请按0。");
	scanf("%d", &n);
	Book* head = zhibiao();
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
	    if(shift -> next == NULL && strcmp(shift -> ISBN, ISBN) != 0)//即添加的书的ISBN未出现重复，可以添加。
	    {
	        shift -> next = tianjia;
	        printf("    该ISBN未重复，可添加该书目。");
	        printf("    请输入添加内容:");
	        scanf("%s %s %s %lf", tianjia -> name, tianjia -> writer, tianjia -> ISBN, tianjia -> price);
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
