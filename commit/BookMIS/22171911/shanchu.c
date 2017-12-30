#include "head.c"
void shanchu( )
{
    int n = 0, len1, len2, i;
    books *head;
    books *q = NULL, *p = (books*)malloc(sizeof(books));
    char word[50];
    printf ("请输入要删除的:");
    scanf ("%s", word);
    len1 = strlen(word);
    len2 = strlen(p -> name); 
    while (p != NULL)
    {
	 for(i = 0; i <=len2 - len1 + 1; i++)
         {
             if (strncmp(p -> name + i, word, len1)==0)
	     {
               	n = 1;
                break;
              }
          }
          if (n == 0)
          {
	      q = p;
	      p = p -> next;
          }
	  if (n ==1)
	  {
	      if(p == head)
                  head = head -> next;
              else
                  q -> next = p -> next;
              break;
          }
     }
}

