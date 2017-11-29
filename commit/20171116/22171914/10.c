#include<stdio.h>
#include<string.h>
void my_strlen(const char* str) 
{
    char *q; 
    int i;
    gets(str);i=0;
    q=str;
    for(i=0;i<100;i++,q++)
    {
      if(*q=='\0')
      break;
    } 
    printf("%d\n",i);
}
int main()
{
  my_strlen;

  return 0;
}
