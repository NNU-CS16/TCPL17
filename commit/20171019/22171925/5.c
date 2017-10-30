#include <stdio.h> 
  int main()
{
  char s[1000];
  int i,n;
  gets(s);
  n=0;
  for(i=0;s[i]!='.';i++)
  {
  if(s[i]==' ')
  {
  printf("%d ",n);
  n=0;
  }
  else
  n++;
  }//注意要输出最后一个单词的长度
  printf("%d\n",n);
  return 0;
}
