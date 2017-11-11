#include <stdio.h>
#include <string.h>
#define MAX 50
int is_str_pal(const char* str);

int main()
{
    char str[MAX];
    printf("Please input str:");
    scanf("%s",str);
    if(is_str_pal(str))
        printf("no\n");
    else
        printf("yes\n");
    return 0;
}

int is_str_pal(const char* str)
{
    char i,j;
    int flag=-1;
    for(i=0,j=strlen(str)-1; j>1; i++,j--)
    { 
        if(str[i]==str[j])
            flag=0;
            break;
    }
    return flag;
       
}   
   
