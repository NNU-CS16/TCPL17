#include<stdio.h>
void my_strcpy(char* dest,const char* src)
{
  if(dest==NULL||src==NULL)
       printf("Invalid\n");
  if(dest==src)
       printf("dest为：%s\n",dest);
  char *temp=dest;
  while((*dest++=*src++)!='\0');
      printf("dest为:%s\n",temp);
}
int main()
{
  char dest[100],src[100];
  printf("请输入src的内容：");
  scanf("%s",src);
  my_strcpy(dest,src);
  return 0;

}
