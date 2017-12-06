#include<stdio.h>
#include<string.h>
int Substr(const char* str,const char* substr)
{
    int len1,len2,i;
    len1=strlen(str);
    len2= strlen(substr);
    for(i=0;i<=len1-len2;i++)
    
	if(strncmp(str+i,substr,len2)==0)
            return i;
    
     return -1;
}   
int main()
{
    char str[1000];
    char substr[1000];
    fgets(str,1000,stdin);
    fgets(substr,1000,stdin);  
    printf("%d",Substr(str,substr));
    return 0;
}  
