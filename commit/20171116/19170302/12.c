#include<stdio.h>
int my_strcmp(const char* str1,const char* str2);

int main()
{
        char str1[100];
        char str2[100];
        scanf("%s",str1);
        scanf("%s",str2);
        printf("%d\n",my_strcmp(str1,str2));
        return 0;
}

int my_strcmp(const char* str1,const char* str2)
{
        while(*str1==*str2 && *str1!='\0')
        {
                str1++;
                str2++;
        }
        return *str1-*str2;
}
                        
