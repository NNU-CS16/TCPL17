#include<stdio.h>
#include<string.h>
void my_strcpy(char* dest, const char* src)
{
  int len;
  len=strlen(src);
  int i=1;
  for(i=1;i<len;i++)
    dest[i]=src[i];
  dest[len]='\0';
  for(i=1;i<len;i++)
    printf("%s\n",dest[i]);
}
  
void main()
{
  char* dest[1000];
  const char* src[1000];
  int j=1;
  for(j=1;j<1000;j++);
  scanf("%c",&dest[j]);
  for(j=1;j<1000;j++);
  scanf("%c",&src[j]);
  my_strcpy(dest[1000],src[1000]);
}

