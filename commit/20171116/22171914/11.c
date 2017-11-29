#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void my_strcpy(char* dest,const char* src)
{
  if(dest==NULL||src==NULL)
  {
  return NULL;
  }
  else
  {
    while((*(dest++)=*(src++))!='\0');
    return dest;
  }
}


int main()
{
    char *s="Golden Global View";
    char d[20];
    
    system("cls");
     
    my_strcpy(d,s);
    printf("%s",d);

    getchar();
    return 0;
} 
