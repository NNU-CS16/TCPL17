 #include "hehe.h"
 void chaxun ()
 {
    printf ("\t\t查询名字输入1\t\t\t查询作者输入2\t\t\t查询ISBN输入3\t\t\t退出输入0\n");
    printf ("请输入:");
    int n, num;
    char str[50], arr[20];
    scanf ("%d", &n);
    while (n)
    {
        book* p = duqu ();
		p = p -> next;
        if (n == 1)
        {
            scanf ("%s", str);
            char* sp;
            while (p != NULL)
            {
                sp = strstr (p -> name, str);   // strstr可直接读取主字符串中子字符串的位置
                if (sp != NULL)
                    printf ("\t\t%-30s\t%-30s\t%-30d\t%-30lf\n", p -> name, p -> writer, p -> ISBN, p -> price);
                p = p -> next;
            }
        }    
        else if (n == 2)
        {
            scanf ("%s", arr);
            while (p != NULL)
            {
                if (strcmp(arr, p -> writer) == 0)
                    printf ("\t\t%-30s\t%-30s\t%-30d\t%-30lf\n", p -> name, p -> writer, p -> ISBN, p -> price);
                p = p -> next;
            }
        }
        else if (n == 3)
        {
            scanf ("%d" , &num);
            while (num != p -> ISBN)
                p = p ->next;
            printf ("\t\t%-30s\t%-30s\t%-30d\t%-30lf\n", p -> name, p -> writer, p -> ISBN, p -> price);
        }
        else if (n == 0)
            return;
		printf ("\t\t查询名字输入1\t\t\t查询作者输入2\t\t\t查询ISBN输入3\t\t\t退出输入0\n");
		printf ("请输入:");
        scanf ("%d", &n);
   }
 }
