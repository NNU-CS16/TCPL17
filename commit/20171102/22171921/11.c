#include <stdio.h>
#include <stdlib.h>
void reverse(char* str)
{
char *end=str;  
char tmp;  
if(str)  
{  
while(*end)  
{
end++;  
}
--end;  
while(str<end)  
{  
tmp=*str;  
*str=*end;  
*end=tmp;  
++str;
--end;
}  
}  
}  
int main()
{
char str[1000];
scanf("%s",str);
reverse(str);
printf("%s\n",str);
return 0;
}
