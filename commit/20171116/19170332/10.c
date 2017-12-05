#include<stdio.h>

int my_strlen(const char* str) 
{
  int len;
  int i;
  for(i=0;str[i]!='\0';i++);
  len++;
  return len;
}
int main(void)
{
  const char* str;
  scanf("%[^\n]",&str);
  printf("%d\n",my_strlen(str));
}  

     
