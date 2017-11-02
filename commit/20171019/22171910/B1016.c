/*部分A+B*/
#include<stdio.h>
#include<string.h>
int fig(char str[],char c);

int main()
{
  char A[36];
  char B[36];
  char m,n;
  scanf("%s %c %s %c",A,&m,B,&n);
  printf("%d",fig(A,m)+fig(B,n));
  return 0;
}

int fig(char str[],char c)
{
  int a=0;
  int b=0;
  for(int i=0;str[i]!='\0';i++)
  { if(str[i]==c) a++; }
  for(int i=0;i<a;i++)
  b=b*10+c-'0';
  return b;
}
