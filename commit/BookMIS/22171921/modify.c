#include "head.h"
void modify()
{
    int i;
    book* p = read();
    printf("\t\t1.请确认是否修改\n");
    printf("\t\t0.返回\n");
    scanf("%d", &i);
    while(i)
    {
		book* head = p;
        char str[50];
		int j;
        printf("\t\t请输入书名：");
        scanf("%s", str);
		while (strcmp (str, head -> book_name))
		    head = head -> next;
		    printf("\t\t1.修改书名：\n\t\t2.修改作者\n\t\t3.修改价格\n\t\t0.返回\n");
		    scanf("%d", &j);
		    if (j == 1)
				scanf("%s", head -> book_name);	        
				if (j == 2)
				    scanf("%s", head -> author);
				    if (j == 3)
						scanf("%lf", &head -> price);
						printf("\t\t1.继续修改\n");
						printf("\t\t0.返回\n");
						scanf("%d", &i);
    }
    FILE* fp;
    if ((fp = fopen("book.csv", "w")) == NULL)
    {
		printf("无法打开文件!\n");	
		exit(1);
    }
    while(p != NULL)
    {
		fprintf(fp, "\t\t%s\n\t\t%s\n\t\t%s\n\t\t%lf\n", p -> book_name, p -> author, p -> ISBN, p -> price);
	    p = p -> next; 
    }
    fclose(fp);
}

