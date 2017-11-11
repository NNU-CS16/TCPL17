#include <stdio.h>
#include <string.h>
void reverse(char* str);
int main()
{
    char str[10];
    scanf("%s", str);
    reverse(str);
    return 0;
}
  void reverse(char* str)
 {
    char i,j,a;
    for (i=0,j=strlen(str)-1; j>i; i++,j--)
{
    a=str[i];
    str[i]=str[j];
    str[j]=a;
}
    printf("%s", str);
 } 

