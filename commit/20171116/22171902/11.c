
#include<stdio.h>
#include<string.h>
void my_strcpy(char* dest,const char* src);
int main()
{
    char dest[10];
    const char src[10]={'1','2','3','4','5'};
    my_strcpy(dest,src);
    puts(dest);
  return 0;
}
void my_strcpy(char* dest,const char* src)
{
    int i;
    for(i=0; ;i++)
    {
     dest[i]=src[i];
    if(src[i]=='\0')
      break;
    }
}


