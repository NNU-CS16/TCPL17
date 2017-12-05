#include<stdio.h>
#include<string.h>    //understand wrong with the question at the bigining.
int my_strcmp(const char* str1, const char* str2);
int main()
{
    char str1[10]={'a','b','c','d','e'};
    char str2[10]={'a','b','c','d','e'};
    printf("%d",my_strcmp(str1,str2)) ;
}

int my_strcmp(const char* str1, const char* str2)
{
    int flag;
    int i;
    for(i=0;i<=10;i++)
    {
        if (str1[i]<str2[i])
        {
            flag=-1;
            break;
        }
       else if(str1[i]>str2[i])
        {
            flag=1;
            break;
        }
       else  if(str1[i]==str2[i]&&str1[i]!='\0'&&str2[i]!='\0')
        {
            return 0;
            continue;
        }
        else if(str1[i]=='\0'||str2[i]=='\0')
            break;
    }
    return flag;
}



