#include<stdio.h> 
#include "system.h"
void inquiry ()
{
    printf ("查询名字输入1  查询作者输入2  查询ISBN输入3  退出输入0\n");
    printf ("请输入:");
    int n, num;
    char str[50], arr[20];
    scanf ("%d", &n);
    while (n)
    {
        book* p = read ();
	p = p -> next;
        if (n == 1)
        {
            scanf ("%s", str);
            char* sp;
            while (p != NULL)
            {
                sp = strstr (p -> name, str);  
                if (sp != NULL)
                    printf ("%-15s %-15s %-15d %-15lf\n", p -> name, p -> writer, p -> ISBN, p -> price);
                p = p -> next;
            }
        }    
        else if (n == 2)
        {
            scanf ("%s", arr);
            while (p != NULL)
            {
                if (strcmp(arr, p -> writer) == 0)
                    printf ("%-30s %-30s %-30d %-30lf\n", p -> name, p -> writer, p -> ISBN, p -> price);
                p = p -> next;
            }
        }
        else if (n == 3)
        {
            scanf ("%d" , &num);
            while (num != p -> ISBN)
                p = p ->next;
            printf ("%-30s %-30s %-30d %-30lf\n", p -> name, p -> writer, p -> ISBN, p -> price);
        }
        else if (n == 0)
            return;
	printf ("查询名字输入1 查询作者输入2 查询ISBN输入3 退出输入0\n");
	printf ("请输入:");
        scanf ("%d", &n);
   }
 }
