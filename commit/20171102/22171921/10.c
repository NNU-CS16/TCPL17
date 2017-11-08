#include <stdio.h>
#include <string.h>
int is_str_pal(const char *str)
{
int len=strlen(str);  
int i;  
for(i=0;i<=len/2;i++)  
{  
if(str[i]==(str[len-1]))  
len--;  
else   
return -1;  
}
return 0;  
}
int main()
{
char str[1000];
scanf("%s",str);
printf("%d\n",is_str_pal(str));
return 0;  
}
