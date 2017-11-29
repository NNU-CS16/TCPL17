#include <assert.h>  
#include <stdio.h>  
int my_strcmp(const char *str1,const char *str2)  
{  
    assert ((str1!=NULL) && (str2!=NULL));  
    while (*str1 == *str2)  
    {  
        if (*str1 == '\0')  
           return 0;  
               
         ++str1;  
         ++str2;  
    }  
    return *str1 - *str2;  
}  
int main()
{
	char str1[25],str2[25];
	scanf("%s%s",str1,str2);
	printf("%d\n",my_strcmp(str1,str2));
	return 0;
}

