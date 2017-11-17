#include <stdio.h>
#include <string.h>
void reverse(char* str);

int main()
{
   char* str;
   scanf("str");
   reverse(str);
   printf("\n");
   return 0;
}

void reverse(char* str)
{
   int len = strlen(str);
   int times = len / 2;
   char temp;
   int i;
   for (i=0; i<times; i++)
    { 
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
   
   
