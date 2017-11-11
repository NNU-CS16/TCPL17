#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int is_str_pal(const char* str) 
{ 
  char b[100];
  int j,i,n;
  n = strlen(str);
  for(i = 0,j = n-1; i < n; i++, j--)
  b[j] = str[i];
    if(strcmp(b,str)==0)
    return 0;
    else
    return -1;
}

int main()
{
char str[10000];
scanf("%s",str);
printf("%d\n", is_str_pal(str));
return 0;
}    
