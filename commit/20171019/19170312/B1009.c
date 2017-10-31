#include <stdio.h>
#include <string.h>
int main()
{
  char s[80];
  gets(s);
  out(s);
  printf("\n");
  return 0;
}
void out(char *s)
{
  char*i=strchr(s,' ');

  if (i!=NULL)
    {
      out(i+1);
      *i='\0';
      printf(" %s",s);
    }
  else
    printf("%s",s);   
}
