#include <stdio.h>
#include <string.h>
int main()
{
  char a[11];
  scanf("%s",a);
  int len=strlen(a);
  int i;
  for(i=0;i<len;i++)
{
  if(a[i]=='-')
  printf("fu");
  else if(a[i]=='0')
  printf("ling");
  else if(a[i]=='1')
  printf("yi");
  else if(a[i]=='2')
  printf("er");
  else if(a[i]=='3')
  printf("san");
  else if(a[i]=='4')
  printf("si");
  else if(a[i]=='5')
  printf("wu");
  else if(a[i]=='6')
  printf("liu");
  else if(a[i]=='7')
  printf("qi");
  else if(a[i]=='8')
  printf("ba");
  else if(a[i]=='9')
  printf("jiu");
  if(i!=len-1)
  printf(" ");
}
  return 0;
}
