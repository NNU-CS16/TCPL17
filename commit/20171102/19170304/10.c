#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str);
int main()
{
    char str[100];
    scanf("%s",str);

    is_str_pal(str);
   
    return 0;
}

int is_str_pal(const char* str)
{
    int i,j,flag=0,n;
    n=strlen(str);
    i=n;
    
    for(i=1,j=n-1;i<n/2;i++,j--)
       if(str[i]!=str[j])  flag=-1;

    printf("%d\n",flag);
}
