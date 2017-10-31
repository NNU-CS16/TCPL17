#include<stdio.h>
int main()
{
  char a[3];
  int i,flag=0;
  scanf("%s",a);
  for(i=2;i>=0;i--)
  {
    if(a[i]!='0') flag=1;
    if(flag ||a[i]!='0') printf("%c",a[i]);
  }
  printf("\n");
  return 0;
}
